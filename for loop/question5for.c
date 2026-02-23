#include<stdio.h>

void main()
{
	//wap to print odd number from 1 to n
	
	int i,n;
	printf("enter n :");
	scanf("%d",&n);
	
	for (i=1; i<=n; i++)
	{
		if(i%2==1)
		{
			printf("%d",i);
		}
	}
}
