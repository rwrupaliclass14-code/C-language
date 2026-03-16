#include<stdio.h>

void main()
{
	/* 1 0 1 0 1
	     1 0 1 0
		   1 0 1
		     1 0
			   1  */

     int i,j,k;
     
     for(i=5; i>=1; i--)
     {
     	
     	for(k=i; k<=4; k++)
     	{
     		printf(" ");
		 }
		 
     	for(j=i; j>=1; j--)
     	{
     	    if((i+j+1)%2)
     	    {
     	    	printf("1");
			 }
			 else
			 {
			 	printf("0");
			 }
		 }
		 printf("\n");
	 }
}
