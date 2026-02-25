#include<stdio.h>

void main()

{
	/*Devlop a program that tacke a score out of 100 as input from the user and calculate the 
	corsponding grade using a ternary operater. allocate grade from a to f for various ranges.*/
	
	int score;
	char grade;
	printf("enter a score :");
	scanf("%d",&score);
	
	//ternory operater using check the condtion with logical operator.
	
	grade=(score>=81 && score<=100)? 'A':   
		  (score>=71 && score<=80)?'B':
	      (score>=61 && score<=70)?'C':
       	  (score>=51 && score<=60)?'D':
	      (score>=41 && score<=50)?'E':'F';
	      
	      //printing a message by using printf function
	printf("your grade is %c \n",grade);
	
	//Question 2 additional comments.
	switch (grade)               //
	{
		case 'A'     : printf("Excellent Work! ");
		break;
		case 'B'     : printf("Well Done! ");
		break;
		case 'C'     : printf("Good Job! ");
		break;
		case 'D'     : printf("You passed,but you could do batter! ");
		break;
		default      : printf("Sorry, you failed! \n");
	}
	
	// Question 3 Eligiblity check.
	
   if (grade>='A' && grade<='D')
   {
   		printf("congratiulation! you are eligible for the next lavel %c ");

   }
   else
   {
   	    printf("you are not eligible, Please try again next time %c");
   }
   
}

