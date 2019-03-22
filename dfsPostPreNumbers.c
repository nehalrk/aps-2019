#include<stdio.h>
 
void DFS(int);
int G[10][10],visited[10],n; 
int count=1;
int post[10],pre[10];   //n is no of vertices and graph is sorted in array G[10][10]
 
void main()
{
    int i,j;
    printf("Enter number of vertices:");
   
	scanf("%d",&n);
 
    //read the adjecency matrix
	printf("\nEnter adjecency matrix of the graph:");
   
	for(i=0;i<n;i++)
       for(j=0;j<n;j++)
			scanf("%d",&G[i][j]);
 
    //visited is initialized to zero
   for(i=0;i<n;i++)
        visited[i]=0;
 
    DFS(0);
    for(i=0;i<n;i++)
         printf("\n\n %d %d",pre[i],post[i]);
}
 
void DFS(int i)
{
    int j;
	printf("\n%d",i);
    visited[i]=1;

    pre[i] = count++;
	for(j=0;j<n;j++)
	{
		if(!visited[j]&&G[i][j]==1)
       {
       	 
       	   DFS(j);
	   }
	  
	}
    post[i]=count++;  
            
            

}