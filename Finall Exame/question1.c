#include<stdio.h>

//Implement a C program to find an average and a grade of a student. Consider 5 subjects. Assign out of 100 marks for each subject. Use conditions for evaluate grades based on average value.

void main()

{
    int marks[5];
	int i,sum=0;
    float average,grade;
    printf("Enter marks:\n");
    
    for(i=1; i<5; i++) 
	{
        printf("Subject %d ",i);
        scanf("%d", &marks[i]);
        
        sum = sum + marks[i];
    }

    average = sum / 5;

    printf("\nAverage: %.2f\n", average);
    
    printf("Grade: ");
    
    if (average>= 90) 
	{
        printf("A");
    } 
	else if (average>= 80) 
	{
        printf("B");
    } 
	else if (average>= 70)
	 {
        printf("C");
    } 
	else if (average>= 60) 
	{
        printf("D");
    } 
	else if (average>= 50) 
	{
        printf("E");
    } 
	else
	 {
        printf("F");
    }
    printf("\n");
    
}


