#include<stdio.h>

void main()
{
	//Q.3  Devlop a program that finds transpose matrix from a given 2D array
	
	int r,c,i,j;
	printf("Enter the arrays row size :");
	scanf("%d",&r);
	printf("Enter the arrays cols size :");
	scanf("%d",&c);
	
	int a[i][j];
	
	printf("\nEnter arrays elements :\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d] ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nThe transpose matrix of array :\n");
	
		for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}

}
