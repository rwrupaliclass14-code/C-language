#include<stdio.h>

void main()
{
	                           /*        1
	                                   1 2 
	                                 1 2 3
	                               1 2 3 4
	                             1 2 3 4 5   */
	int i,j,k;
	
  for(i=1; i<=5; i++)   //outer-row
  {
  	for(k=i; k<5; k++)
  	{
  		printf("  ");
	  }
  	for(j=1; j<=i; j++)   //inner -col
  	{
  		printf("%d ",j);
	  }
	  printf("\n");
  } 
	
}
