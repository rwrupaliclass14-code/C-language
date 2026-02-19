#include<stdio.h>

void main()
{
	//WAP to Find max. from given 4 no. using nested if else.

    int a,b,c,d;              //we have declaired intiger variable a,b,c and d
    printf("enter a ");       // we are printing a massage enter a by using a printf function 
    scanf("%d",&a);         // we are getting i/p in variable a by using a scanf function
    printf("enter b ");       // we are printing a massage enter b by using a printf function 
    scanf("%d",&b);         // we are getting i/p in variable b by using a scanf function
    printf("enter c ");     // we are printing a massage enter c by using a printf function
    scanf("%d",&c);         // we are getting a i/p in variable c by using a scanf function
    printf("enter d ");     //we are printing a massage enter d by using a printf function
    scanf("%d",&d);         //we are getting a i/p in variable d by using a scanf function 
    
   if (a>b)                //we are compare a to b, a greater than b
   {
   	   if (a>c)           //we are compare a to c, a greater than c
   	   {
   	   	 if (a>d)         //we are compare a to d, a greater than d
			   {
   	   	 	      printf("a is max");    //we are printing a massage enter d by using a printf function
			   }
			   else
			   {
			   	  printf("d is max");    //we are printing a massage enter d by using a printf function
			   }
   	   	 
		  }
		  else
		  {
		  	if (c>d)                  //we are compare c to d, c greater than c
		  	{
		  	  printf("c is max");	//we are printing a massage enter d by using a printf function
			  }
			  else
			  {
			  	printf("d is max");        //we are printing a massage enter d by using a printf function
			  }
		  }
   }
   else
   {
   	if (b>c)                           //we are compare b to c, b greater than c
   	{
   	    if (b>d)                       //we are compare b to d, b greater than b
		   {
		   	printf("b is max");                //we are printing a massage enter d by using a printf function
		   }
		   else
		   {
		   	printf("d is max");              //we are printing a massage enter d by using a printf function
		   }	
	   }
	  else
		  {
		  	if (c>d)                       //we are compare c to d, c greater than c
		  	{
		  	  printf("c is max");	           //we are printing a massage enter d by using a printf function
			  }
			  else
			  {
			  	printf("d is max");           //we are printing a massage enter d by using a printf function
			  }
		  }
   
   }
	}
