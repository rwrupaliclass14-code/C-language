#include<stdio.h> //header file 

void main ()    //main function
{
	//wep to check min/max find from 2,3,4,5 variable using else if ladder.
	
	//we have declaired intigire variable a,b,c and d.
	int a,b,c,d;
	//printing a massage enter a by using printf function
	printf("enter a: ");
	//we are getting a i/p in variable by using scanf function
	scanf("%d",&a);
	//printing a massage enter b by using printf function
	printf("enter b: ");
	//we are getting a i/p in variable by using scanf function
	scanf("%d",&b);
	//printing a massage enter c by using printf function
	printf("enter c: ");
	//we are getting a i/p in variable by using scanf function
	scanf("%d",&c);
	//printing a massage enter d by using printf function
	printf("enter d: ");
	//we are getting a i/p in variable by using scanf function
	scanf("%d",&d);
	
	
	            //compared a to b ,a to c, a to d with and operater 
	            if (a>b && a>c && a>d)    
	            {
	            	//printing a massage a is max. by using printf function
	                  printf("a is max");	
				}
				//compared a to b ,a to c, a to d with and operater 
				else if (b>a && b>c && b>d)
				{
					//printing a massage b is max. by using printf function
					printf("b is max");
				}
				//compared a to b ,a to c, a to d with and operater 
				else if (c>a && c>b && c>d)
				{
					//printing a massage c is max. by using printf function
					printf("c is max");
				}
				//compared a to b ,a to c, a to d with and operater 
				else if (d>a && d>b && d>c)
				{
					//printing a massage d is max. by using printf function
					printf("d is max");
				}
				//compared a to b ,a to c, a to d with and operater 
				else
				{
					//printing a massage a,b,c and d all are equal by using printf function
					printf("a,b,c,d all are equal");
				}
}
