#include<stdio.h>

void main()
{
	// wap to print even number from n to 1 using for loop
	
	int n,i;
	printf("enter n :");
	scanf("%d",&n);
	
	for(i=n; i>=1; i--)
	{
		if(i%2==0)
		{
			printf("%d",i);
		}
	}
}
