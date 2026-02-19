#include<stdio.h>

void main()
{
	//wap to check number is negative,positive or neutral by using lader else if.
	
	int number;
	printf("enter number:");
	scanf("%d",&number);
	    
	    if(number>0)
	    {
	    	printf("number is positive");
		}
		else if(number<0)
		{
			printf("number is negative");
		}
		else
		{
			printf("number is neutral");
		}
}
