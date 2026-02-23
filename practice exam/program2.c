#include<stdio.h>

void main()
{
	//devlop a program to count the total number of digits in number 
	
	int num, count=0;
	printf("enter a number :");
	scanf("%d",&num);
	
	while (num>0)              //752 > 0 condition true 
	{
		num=num/10;            //num=752/10, 75/10, 7/10, 0
		count++;               // count= 1,2,3; one by one valu increas
	}
	printf("total number of digit %d \n",count);  //printing a massage total number of digit
}
