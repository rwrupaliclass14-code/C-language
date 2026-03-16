#include<stdio.h>

void main()
{
	//.WAP to perform diagonal and anti diagonal sum of 2D array.
	
	int n,i,j,sum=0;
	printf("Enter array size :");
	scanf("%d",&n);
	
	int a[n][n];
	
	printf("\nvalue of array element :\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<n; i++)     // 0,0   1,1  2,2
	{    
	for(j=0; j<n; j++)
	{
		if(i==j)
		{
			sum=sum+a[i][j];
		}
	} 
   	}
	printf("sum of diagonal%d ",sum); //sum=15
	
	printf("\n");
     
     sum=0; //reset sum=0
     j=2;
     for(i=0; i<n; i++)
     {
     	sum=sum+a[i][j];  
     	j--;
	 }
	 printf("sum of anti diagonal%d ",sum);
}
