#include<stdio.h>

void main()
{
	// wap to print only even elements of array
	
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	
	int i;
	
	for(i=0; i<10; i++)
	{
		if(a[i]%2==0)
		{
		printf("%d \n",a[i]);
		}
	}
}
