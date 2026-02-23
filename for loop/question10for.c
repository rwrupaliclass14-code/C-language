#include<stdio.h>

void main()
{
	//wap to print the multiplican table of n using for loop
	
	int i,n;
	printf("enter n:");
	scanf("%d",&n);
	
	for(i=1; i<=10; i++)
	{
		printf("%d*%d*%d\n",n,i,n*i);
	}
}
