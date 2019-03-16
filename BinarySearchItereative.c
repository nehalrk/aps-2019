#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int BinarSearch(int arr[], int left, int right, int x)
{
	while(left<=right)
	{
		int mid=(left+right)/2;
		if(arr[mid]==x)
		{
			return mid;
		}
		else if(arr[mid]>x)
		{
		   right=mid-1;	
		}
		else if(arr[mid]<x)
		{
			left=mid+1;
		}
	}
	return -1;
}

int main(int argc, char *argv[]) {
	int n,i,x,index=-1;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element you want to search\n");
	scanf("%d",&x);
	index=BinarSearch(arr,0,n-1,x);
	if(index!=-1)
	{
		printf("Element found at index %d",index);
	}
	else
	{
		printf("Oops! element not found\n ");
	}

}
