#include<stdio.h>

void main()
{
	//Q.5 devlop a program that prints the given full pyramid pattern using nested loop.
	
	/*       5
	       4 5 4
	     3 4 5 4 3
	   2 3 4 5 4 3 2
	 1 2 3 4 5 4 3 2 1
	*/
	
	int i,j,k;
	
	for(i=5; i>=1; i--)
	{
		for(k=i; k>=2; k--)
		{
			printf("  ");
		}
		for(j=i; j<=5; j++)
		{
			printf("%d ",j);
		}
		
	
		
		for(j=4; j>=i; j--)
		{
			printf("%d ",j);
		}
		    printf("\n");
	}
}
