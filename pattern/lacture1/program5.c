#include<stdio.h>

void main()
{
	/* 5
	   4 5 
	   3 4 5
	   2 3 4 5
	   1 2 3 4 5 */
	   
	   int i,j;
	   
	  for (i=5; i>=1; i--)  // outer-raw loop
	  {
	  	for(j=i; j<=5; j++)  // inner-col loop 
	  	{
	  		printf("%d",j );
		  }
		  printf("\n");
	  }
}
