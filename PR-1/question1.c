#include <stdio.h>

void main()
{
	/* Q1. Temperature Converter
	   Write C program to convert temperature from degree Celsius to Fahrenheit using the formula: F=(9/5*C)+32*/
	
	int clesius;
	 
	printf("Enter  the temperature in Clesius :");
	scanf("%d",&clesius);
	
    float fahrenheit = (clesius*1.8 )+ 32;
	printf("the temperature in fahrenheit: %.1f",fahrenheit);
}

