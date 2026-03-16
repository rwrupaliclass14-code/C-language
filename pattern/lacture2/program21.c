#include<stdio.h>

void main()
{
	/* 1 1 1 1 1
	     0 0 0 0
		   1 1 1
		     0 0
			   1    */
			   
	int i,j,k;
	
	for(i=5; i>=1; i--)
	{
		for(k=i; k<=4; k++)
		{
			printf(" ");
		}
	   for(j=1; j<=i; j++)
	   {
	   	if((i+1)%2)
	   	{
	   		printf("0");
		}
		else
		{
			printf("1");
		}
	   }
	   printf("\n");	
	}		   
}
