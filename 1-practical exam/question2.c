#include<stdio.h>

void main()
{
	//wap to print grade of based on user given percentage.
	 
	float percentage;
	printf("enter percentage :");
	scanf("%f",&percentage);
	char Grade;
	
	Grade = (percentage>=81.99 && percentage<=100)? 'A':
	        (percentage>=71.99 && percentage<=80)? 'B':
		    (percentage>=61.99 && percentage<=70)? 'C':
		    (percentage>=51.99 && percentage<=60)? 'D':
		    (percentage>=41.99 && percentage<=50)? 'E': 'F';    
	 
	 printf("Grade %c",Grade);
}
