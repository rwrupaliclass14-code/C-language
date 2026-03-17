#include<stdio.h>

void main()
{
	//Q.4  Devlop a program that finds the sum of all elements of given row & col 2D array
	
	int r,c,i,j,r1,c1,sum=0;
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
	
    printf("\nenter row count for sum :");
    scanf("%d",&r1);
     
     for(i=0; i<c; r++)
     {
     	printf("%d",a[r1][i]);
     	sum = sum + a[r1][i];
	 }
	 printf("sum of %d row is %d",a[r1],sum);
	 
	 printf("\n");
	 
	 printf("\nenter cols count for sum :");
    scanf("%d",&c1);
    
     for(i=0; i<c; r++)
     {
     	printf("%d",a[i][c1]);
     	sum = sum + a[i][c1];
	 }
	 
	  printf("sum of %d cols is %d\n",r1,sum);
	 

}
