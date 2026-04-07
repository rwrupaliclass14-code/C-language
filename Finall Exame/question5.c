#include<stdio.h>

//Print a below pattern using nested for loop in C language:

void main()
{
int i,j,k;
 
	    for(i=10; i>=6; i--)  // outer-raw loop
	   {
	   	
	   	for(k=1; k<i; k++)
	   	{
	   		printf("- ");
		   }   
	                                  
	   	for(j=i; j<=10; j++)   // inner-col loop
	   	{
	   		printf("%d ",j);
		   }
	     
		   printf("\n");
	   }	
}
