#include<stdio.h>

void main()
{
	//wap to create an array by user define 
	
	int n,i;
	printf("Enter size of array :");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("enter a[%d] :",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		printf("%d \n",a[i]);
	}
}
