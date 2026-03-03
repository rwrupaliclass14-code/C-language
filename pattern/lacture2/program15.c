#include<stdio.h>

void main()
{
	/* 1
       0 1
       1 0 1
       0 1 0 1
       1 0 1 0 1 */
       
       int i,j;
       
       for(i=1; i<=5; i++)       
       {
       	for(j=1; j<=i; j++)
       	{
       		printf("%d",(i+j+1)%2);
		   }
		   printf("\n");
	   }
}
