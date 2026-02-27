#include<stdio.h>

void main()
{
	//Wap to swap two value of variable without using third variable.
	
	int a,b;
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
          
		  a = a+b;    // a= 2+4 =6
		  b = a-b;    // b= 6-4 =2
		  a = a-b;    // a= 6-2 =4
		  
		  printf("a=%d \n",a);
		  printf("b=%d \n",b);	
}

