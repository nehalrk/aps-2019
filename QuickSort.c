# include <stdio.h> 
void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int arr[],int low,int high)
{
	int pivot=arr[high];
	int i=low-1;
	int j;
    for(j=low;j<=high-1;j++)
	{
		if(arr[j]<=pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	
	}
	swap(&arr[i+1],&arr[high]);
	return i+1;
}
void QuickSort(int arr[],int low,int high)
{
	if(low<high)
	{
		int index=partition(arr,low,high);
	    QuickSort(arr,low,index-1);
     	QuickSort(arr,index+1,high);
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
    QuickSort(arr, 0, n-1);
    
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
