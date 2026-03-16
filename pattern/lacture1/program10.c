#include<stdio.h>

void main()
{
	/* 5 4 3 2 1
       5 4 3 2
       5 4 3
       5 4
       5
    */
     
     int i,j;
     
     for(i=5; i>=1; i--)
     {
     	for(j=5; j>=i; j--)
     	{
     		printf("%d ",j);
		 }
		    printf("\n");
	 }
}
