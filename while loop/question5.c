#include<stdio.h>

void main()
{
	//wap to print odd number from 1 to n using while loop
	
	int n,i=1;
	printf("enter n :");
	scanf("%d",&n);
	
	while (i<=n)
	{
	 if(i%2==1)
	 {
	 	printf("%d",i);
	 }
	 i++;
	}
}
