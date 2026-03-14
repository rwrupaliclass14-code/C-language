#include<stdio.h>

void main()
{
	//3.WAP to find average of 2D array.
   
   int r,c,i,j,sum=0;
   float average;
   
   printf("Enter size of raw :");
   scanf("%d",&r);
   
   printf("Enter size col :");
   scanf ("%d",&c);
   
   printf("\n");
   
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
			sum += a[i][j];
		}
	}
	    average = sum/(r*c);
	    
	    printf("%.2f", average);
	
   
}
