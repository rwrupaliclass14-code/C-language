#include<stdio.h>

void main()
{
	/* 5 4 3 2 1 
	   4 3 2 1
	   3 2 1
	   2 1
	   1        */
	   
	   int i,j,a=1;
	   
	   for(i=5; i>=1; i--)  //outer-raw loop
	   {
	   	for(j=i; j>=1; j--)  // inner-col loop
	   	{
	   		printf("%d",j);
		}
		    printf("\n");
	   }
}
