#include<stdio.h>

void main()
{
	
	/*  1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5
        1 2 3 4
        1 2 3
        1 2
        1
	*/
	
	int i,j,k;
	
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
			printf("\n");
	}
	

	
		for(i=5; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
			printf("\n");
	} 
}
