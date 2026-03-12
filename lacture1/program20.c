#include<stdio.h>

void main()
{
	/*    -
	     | -
         - | -
        | - | -
        - | - | -
20.
	*/
	
	int i,j;
	
	for(i=5; i>=1; i--)
	{
		for(j=i; j<=5; j++)
		{
		if(j%2==1)
		{
			printf("- ");
		}
		else
		{
			printf("| ");
		}
		}
		printf("\n");
	}
}
