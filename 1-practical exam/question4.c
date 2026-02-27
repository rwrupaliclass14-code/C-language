#include<stdio.h>

void main()
{
	//wap to print only odd numbers from n to 1 using for loop
	
	int i,n;
	printf("enter number :");
	scanf("%d",&n);
	
	   for(i=n; i>=1; i--)
	   {
	   	if(i%2==1)
		   {
		   	printf("%d",i);
		   }
	   	
	   }
	 
}
