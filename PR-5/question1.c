#include<stdio.h>

void main()
{
	//question1 : Devlop a program that finds all the negative eliments from a given 1D array.
	
	int i,j,n;
	printf("Enter array size :");
	scanf("%d",&n);
	
	int a[i][j];
	
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
	
	}
	printf("\nNegative eliments array :");
	
	for(i=0; i<n; i++)
	{
	 if(a[i][j]<0)
	 
		   {
		   	  printf("%d",a[i][j]);
		   }
	}
	
}
