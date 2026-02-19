#include<stdio.h>

void main()
{
	//Wap to print the multiplication table of n using while loop
	
   int n,i;                          //2*1=2
   printf("enter n");
   scanf("%d",&n);
   
   while(i<=10)                      // 1 to 10
   {
   	printf("%d*%d=%d \n",n,i,n*i);
   	i++;
   }
}
