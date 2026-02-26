#include<stdio.h>

void main()
{
	//Wap to find sum of first and last digit of a number
	
	int ld,num,sum=0;
	printf("enter num :");
	scanf("%d",&num);
	
	ld = num%10;    // 753 % 10 = 75 %10 = 7 fd 
	
	while(num>9)
	{
		num = num/10;   // 753 / 10 = 75 / 10 = 7
	}
	sum = num+ld;      //
	
	printf("sum of first and last digit %d",sum);
}
