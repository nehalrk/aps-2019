#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	int arr[8]={-2,-3,4,-1,-2,1,5,-3};
	int max=0,tmax=0,i;
	for(i=0;i<8;i++)
	{
		tmax=tmax+arr[i];
		if(tmax<0)
		{
			tmax=0;
		}
		if(max<tmax)
		{
			max=tmax;
		}
	}
	printf("max:%d",max);
}
