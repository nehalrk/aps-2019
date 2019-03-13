#include <stdio.h>
#include <stdlib.h>
#define MAX 100
struct stack{
  int arr[MAX];
  int top;
};
typedef struct stack stk;
void push( stk *s)
{
     if(s->top==MAX-1)
     {
         printf("Stack is FULL\n");
         return ;

     }
     int x;
     printf("Enter the data\n");
     scanf("%d",&x);
     s->arr[++s->top]=x;

}
void pop(stk * s)
{
   if(s->top==-1)
   {

       printf("Stack is empty\n");
       return;
   }
   s->top--;
}
void peek(stk s)
{
    printf("%d\n",s.arr[s.top]);

}
void display(stk s)
{
    int i;
    for(i=s.top;i>=0;i--)
    {
        printf("%d\n",s.arr[i]);
    }
}
int main()
{
     stk s;
     s.top=-1;
    while(1)
    {

        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3.PEEK\n");
        printf("4.DISPLAY\n");
        printf("5.EXIT\n");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push(&s);
                    break;
            case 2:pop(&s);
                    break;
            case 3:peek(s);
                    break;
            case 4: display(s);
                    break;
            case 5: exit(0);

        }
    }


    //int choice;


}
