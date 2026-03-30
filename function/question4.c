#include<stdio.h>
 
 // wap to print area of circle using function 
 
   area(float r)
{
	float area;
	area = 3.14 * r * r;
	return area;
}
 
void main()
{
	 float radius, area_of_circle;
	 printf("Enter radius of circle :");
	 scanf("%f",&radius);
	area_of_circle = area(radius);
	printf("area of circle = %.2f",  area_of_circle);
	
 } 
