#include<stdio.h>

void main()
{
	//Q.1 Write a Program to find the length of a 1D array.
	
	int i,n;
	
	printf("Enter array size :");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("length of size %d\n",i);
}
