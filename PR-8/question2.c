#include<stdio.h>

//Devlop a program to find cubes of all elements from given 2D array using pointer with UDF.

void cubfunc(int *ptr, int row, int cols)
{
   int i,j,n;
   
   for(i=0; i<row; i++)
   {
   	for(j=0; j<cols; j++)
   	{
   		 n = *ptr;
   	     printf("\ncube of arr[%d][%d] = [%d]\n",i,j,n*n*n);
		 ptr++;
  	}
   	
   }
    
}

void main()
{
	int row,cols,i,j;
	
	printf("Enter array size :");
	scanf("%d %d",&row,&cols);

    int arr[row][cols];

     for(i=0; i<row; i++)
     {
     	for(j=0; j<cols; j++)
     	{
     	    printf("\nEnter array elements:a[%d][%d]",i,j);
     	    scanf("%d",&arr[i][j]);
		 }
		 printf("\n");
	 }
	 
	 printf("Cube of all elements :\n");
	 cubfunc(&arr, row, cols);
}
