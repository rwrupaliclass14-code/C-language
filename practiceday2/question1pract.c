#include<stdio.h>

void main()

{
	/*Devlop a program that tacke a score out of 100 as input from the user and calculate the 
	corsponding grade using a ternary operater. allocate grade from a to f for various ranges.*/
	
	int score;
	char grade;
	printf("enter a score :");
	scanf("%d",&score);
	
	grade=(score>=81 && score<=100)? 'A':
	(score>=71 && score<=80)?'B':
	(score>=61 && score<=70)?'C':
	(score>=51 && score<=60)?'D':
	(score>=41 && score<=50)?'E':'F';
	printf("your grade is %c \n",grade);
	
   if (grade>='A' && grade<='E')
   {
   		printf("congratiulation! you are eligible for the next lavel %c ");

   }
   else
   {
   	printf("you are not eligible for the next lavel %c");
   }
}

