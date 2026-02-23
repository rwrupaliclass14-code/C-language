#include<stdio.h>

void main()
{
	//wap to calculate the factorial of n using for loop 
	
	int i,n,fact=1;
	printf("enter n:");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		fact*=i;
	}
	printf("%d=%d",n,fact);
}
