#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int arr[], int left,int right,int x)
{
	
	while(left<=right)
	{
	

		int mid= (left+right)/2;
	//	printf("***%d***\n",mid);
		if(arr[mid]==x)
		{
		//	printf("###%d##",arr[mid]);
			return mid;
		}
		else if(arr[mid]>x)
		{
	  		 return BinarySearch(arr,left,mid-1,x);
		}
		else if(arr[mid]<x)
		{
				return BinarySearch(arr,mid+1,right,x);
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
	printf("Enter the element you would like to search\n");
	scanf("%d",&x);
	index=BinarySearch(arr,0,n-1,x);
    if(index!=-1)
    {
    	printf("Element found at index %d\n",index);
    	
	}
	else
	{
		printf("Oops! element not found\n");
	}
}
