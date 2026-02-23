#include<stdio.h>

void main()
{
	//wap to print sum, 1 to n using for loop
	
	 int n, i, sum = 0; 
	 printf("enter n:");
	 scanf("%d",&n);
	 
	 for (i=1; i<=n; i++)
	 {
	 	sum+=i;
	 }
	 printf("%d=%d",sum,n);

    
}
