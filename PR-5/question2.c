#include<stdio.h>

void main()
{
	//Q.2  Devlop a program that finds largest eliments from a given 2D array.
	
	int r,c,i,j,largest;
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
		
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(a[i][j]>largest)
			{
				largest=a[i][j];
			}	
		}
		
	}
		printf("The largest elements of :%d",largest);
}
