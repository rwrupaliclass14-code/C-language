#include<stdio.h>

void main ()
{
	//WAP to find sum of 2D array.
	
	int r,c,i,j,sum=0;
	
	printf("enter size of row :");
	scanf("%d", &r);
	
	printf("enter size of col :");
	scanf("%d",&c);
	
	printf("\n");
	
	int n[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("n[%d][%d]",i,j);
			scanf("%d",&n[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
		    sum += n[i][j];
		}
	
    }
    	printf("sum = %d ",sum);
}
