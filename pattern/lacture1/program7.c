#include<stdio.h>

void main()

{
	/* 1 2 3 4 5 
	   1 2 3 4
	   1 2 3 
	   1 2 
	   1         */
	   
	   int i,j;
	   
	   for(i=5; i>=1; i--)  // raw-outer loop       1<=5    //  1 2 3 4 5
	   {                                                    //  1
	   	for(j=1; j<=i; j++)  // col-inner loop      1<=5    // 
	   	{
	   	printf("%d",j);	
		}
		printf("\n");
	   }
}

