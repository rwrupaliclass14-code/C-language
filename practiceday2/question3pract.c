#include<stdio.h>

void main()
{
	/*further, extend the program to check eligiblity for the next level based on the grade using an
	if else statement. print congratulation! you are eligible for the next lavel if the grade is form
	'A' to'D' print please try again next time if the grade is 'F'. */
	
	char grade;
	printf("enter your marks :");
	scanf("%c", &grade);
	
 if (grade>='A' && grade<='E')
   {
   	printf("congratiulation! you are eligible for the next lavel %c ");

   }
   else
   {
   	printf("you are not eligible for the next lavel %c");
   }
}
