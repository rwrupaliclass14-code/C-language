#include<stdio.h>

void main()
{
	/* Q.2 Gross salary calculator
	   create program thats the gross salary by adding percentages of HRA, DA and TA to the base salary as chosen by user.
	   Ex. Input base salary 100, HRA 10%, DA 5%, TA 8%
	   output : Gross salary Rs 123.*/
	   
	   float base_salary;
	   
	   printf("Enter base salary :");
	   scanf("%f",&base_salary);
	   
	   float hra = ( base_salary * 10)/100;
	   float da = ( base_salary * 5)/100;
	   float ta = ( base_salary* 8)/100;
	   
	   float Gross_salary = base_salary + hra + da + ta;
	   
	   printf("Gross_salary : Rs %.2f",Gross_salary);
	   
}
