#include<stdio.h>

void main()
{
	/* Q3.Triangle Angle Finder
       Write a program to find the third angle of a right triangle when two other angles are given.
	   EX. First triangle 65, Second triangle 45
	   output : third triangle 70*/
       
       int first_angle, second_angle, third_angle;
       printf("Enter first_angle :");
       scanf("%d",&first_angle);
       printf("Enter second_angle :");
       scanf("%d",&second_angle);
       
       third_angle = 180 - (first_angle + second_angle);
       printf("third_angle : %d",third_angle);
}
