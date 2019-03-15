#include <stdio.h>
#include <stdlib.h>

typedef struct bst{
	int data;
	struct tree *left;
	struct tree * right;

}BST;
BST * insert_bst(BST *root)
{
    BST *newnode;
	newnode=(BST*)malloc(sizeof(BST));
	if(newnode==NULL)
	{
		printf("Memory not allocated\n");
	}
    printf("Enter the tree data\n");
    scanf("%d",&newnode->data);
    newnode->left=NULL;
    newnode->right=NULL;
    if(root==NULL)
    {
    	return newnode;
	}
	BST *prev=NULL,*cur=root;
	while(cur->data!=NULL)
	{
		prev=cur;
		if(cur->data >newnode->data)
		{
			cur=cur->left;
		}
		else if(cur->data <newnode->data)
		{
			cur=cur->right;
		}
	}
	if(prev->data > newnode->data)
	{
		prev->left=newnode;
	}
	else
	{
		prev->right=newnode;
	}
	return root;
}

void inorder(BST *root)
{
	if(root!=NULL);
	{
		inorder(root->left);
		printf("%d\n",root->data);
		inorder(root->right);
	}
}
BST *Delete_bst(BST *root)
{
	int data;
	if(root==NULL)
	{
		printf("EMPTY tree\n");
		return root;
	}
	printf("Enter the data to be deleted\n");
	scanf("%d",&data);
	BST *parent,*curr,*succ,*p;
	while(curr!=NULL && curr->data!=data)
	{
		parent =curr;
		if(curr->data > data)
		{
			curr=curr->left;
		}
		else
		{
			curr=curr->right;
		}
	}
	if(curr==NULL)
	{
		printf("Item not found");
		return root;
	}
	if(curr->left==NULL)
	{
		p=curr->right;
	}
	else if(curr->right==NULL)
	{
		p=curr->left;
	}
	else
	{
		root=curr->right;
		while(succ->left!=NULL)
		{
			succ=succ->left;
		}
		succ->left=curr->left;
		p=curr->left;
	}
	if(parent==NULL)
	{
		free(curr);
		return p;
	}
	if(p==curr->left)
	{
		parent->left=p;
	}
	else
	{
		parent->right=p;
	}
	free(curr);
	return root;
}
int main(int argc, char *argv[]) {
    while(1)
    {

        int choice;
        BST *root=NULL;
        printf("1.INSERT\n");
        printf("2.DELETE\n");
        printf("3.INORDER\n");
        //printf("4.DISPLAY\n");
        printf("5.EXIT\n");
        scanf("%d",&choice);
        switch(choice)
        {

            case 1:root=insert_bst(root);
                    break;
            case 2: root=Delete_bst(root);
                    break;
            case 3: inorder(root);
                    break;
            case 5: exit(0);
        }
    }

}
