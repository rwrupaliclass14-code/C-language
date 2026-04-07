#include<stdio.h>


	//Write a C program to find the average of all elements in a 2D array using a function.

void main()
{
	int i,j,r,c,sum=0;
	
   	float average;
   
   printf("Enter size of raws :");
   scanf("%d",&r);
   
   printf("Enter size cols :");
   scanf ("%d",&c);
   
   int a[r][c];
   
   for(i=0; i<r; i++)
   {
   	for(j=0; j<c; j++)
   	{
   		printf("a[%d][%d]",i,j);
   		scanf("%d",&a[i][j]);
	}
	printf("\n");
   }
   
   		for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			sum = sum + a[i][j];
		}
	}
	    average = sum/(r*c);
	    
	    printf("%.2f", average);
   }
