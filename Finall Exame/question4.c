#include<stdio.h>

//Write a C program to find even elements from an 1D array using Pointer.

void main()
{
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
