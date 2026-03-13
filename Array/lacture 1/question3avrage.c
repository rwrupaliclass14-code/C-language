#include<stdio.h>

void main()
{
	//WAP to find the average of the 1D array
	
	int i,n,sum=0;
	float avrage;	

	printf("Enter array of size :");
	scanf("%d",&n);
	
		int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		sum += a[i];
		
	}
        avrage = sum/n;
        printf("enter avrage %f ",avrage); 
}


