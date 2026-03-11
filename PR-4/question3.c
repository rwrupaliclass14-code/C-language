#include<stdio.h>

void main()
{
	//Q.3 devlop a program that prints the given left half triangle pattern usinfg 
	
	/*        5
	        4 5
          3 4 5
        2 3 4 5
      1 2 3 4 5
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
		    printf("\n");
	}
}
