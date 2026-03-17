#include<stdio.h>

void main()
{
	// Devlop a program that finds the sum of all elements of given row & col 2D array
	
	int i,j,r,c,r1,c1,sum=0;
	
	printf("Enter the arrays row size :");
	scanf("%d",&r);
	printf("Enter the arrays cols size :");
	scanf("%d",&c);
	
		printf("\nEnter arrays elements\n");
		
		int a[i][j];
		
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
		
	
		printf("\nEnter row number :");
		scanf("%d",&r1);
	
	for(i=0; i<c; i++)
	{
		   printf("row elements :%d\n",a[i][r1]);
			sum = sum + a[i][r1];
	}
		printf("the sum of %d row elements : %d",r1, sum);
	
		printf("\n......\n");
		
	sum=0;
		printf("\nEnter cols number :");
		scanf("%d",&c1);
	
	for(j=0; j<r; i++)
	{
		   printf("row elements :%d\n",a[c1][j]);
			sum = sum + a[c1][j];
	}
		printf("the sum of %d row elements : %d",c1, sum);

}
