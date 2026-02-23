#include<stdio.h>

void main()

{
	//devlop a program to find the sum of a numbers firs and last digits 
	 
	 int ld,num,sum=0;
	 printf("enter n :");
	 scanf("%d",&num);
	 
		ld = num%10;      // number modul 10 give last digit 
		while(num>9)     //user i/p compared, greater than 9
		{
		
			num=num/10;   // num devid by 10 gives to answer firs digit
		}
       	sum=ld+num;       //last digit plus with first number 
		printf("total number of sum %d",sum); //printing a message total number of sum 
	 
}
