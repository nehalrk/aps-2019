#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
	
}

int  partition(int arr[],int left, int right,int pivot )
{
	
	while(left<right)
	{
		while(arr[left]<pivot)
		{
			left++;
		}
		while(arr[right]>pivot)
		{
			right--;
		}
		if(left<right)
		{
			swap(&arr[left],&arr[right]);
		}
	}
	swap(&arr[right],&pivot);
	return right;
	
}
void QuickSort(int arr[], int left,int right )
{
	if(left<right)
	{
		int pivot= arr[(left+right)/2];
		int index=partition(arr,left,right,pivot);
		QuickSort(arr,left,index-1);
		QuickSort(arr,index+1,right);
	}
	
}
void printArray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
	}
}

int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	QuickSort(arr,0,n-1);
	printArray(arr,n);
}
