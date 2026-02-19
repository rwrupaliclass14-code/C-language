#include<stdio.h>

void main ()
{
	//wap to print sum 1 to n using while loop
	
	int i=1, sum=0, n;
	printf("enter n:");
	scanf("%d",&n);
	
	if (n>0)
	{
		
	
		while (i<=n)
		{
			sum+=i;
			i+=1;
		}
		printf("sum of number 1 to %d");
	}
	else
	{
		printf("please enter the valid i/p");
	}
	
}
