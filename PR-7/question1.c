#include<stdio.h>

  /* Devlop a menu drive a program to implement arithmetic operations such as a +, -, *, / and % using UDF, switch case and looping.
     make sure that the program is endless until a cirtain letter is pressed.*/
     
void addfunc(int a, int b)
     {
	    printf("\nAddition of %d and %d = %d\n",a,b,a+b);
	 }     
void subfunc(int a, int b)	 
     {
     	printf("\nSubstraction of %d and %d = %d\n",a,b,a-b);
	 }
void multifunc(int a, int b)
     {
	    printf("\nmultiplication of %d and %d = %d\n",a,b,a*b);
	 }	 
void divifunc(int a, int b)
     {
     	if(a==0)
     	{
     	   printf("\ndivision of %d and %d = %d\n",a,b,a/b);
		 }
		 else
		 {
		    printf("Error : can not divide by zero :\n");	
		 }
	    
	 }	
void modfunc(int a, int b)
      {
      	if(a==0)
      	{
      	   printf("\nmodule of %d and %d = %d\n",a,b,a%b);	
		}
		else
		{
		   printf("Error : can not finde module by zero :\n");	
		}
	  }	 
	  
int main()
{
	  int choice=-1;
	   int n1, n2;
	   
	   while(choice!=0)
	   {
	   	printf("\npress 1 for +\n");
	   	printf("\npress 2 for -\n");
	   	printf("\npress 3 for *\n");
	   	printf("\npress 4 for /\n");
	   	printf("\npress 5 for %\n");
	   	
	   	printf("\nEnter your choise :");
	   	scanf("%d",&choice);
	   	
	   	if(choice==0)
	   	{
	   		printf("Exiting program...\n");
	   		break;
		   }
		   
		   if(choice>=1 && choice<=5)
		   {
		   	printf("\nEnter the first number :");
		   	scanf("%d",&n1);
		   	printf("\nEnter second number :");
		   	scanf("%d",&n2);
		   	
		   	switch(choice)
		   	{
		   		case 1 : 
		   		addfunc(n1, n2);
		   		break;
		   		case 2 :
		   		subfunc(n1,n2);
		   		break;
		   		case 3 :
		   		multifunc(n1,n2);
		   		break;
		   		case 4 :
		   		divifunc(n1,n2);
		   		break;
		   		case 5 :
		   		modfunc(n1,n2);
		   		break;
			   }
		   	
		   }
		   else
		   {
		   	printf("invalid choice :");
		   }
	   }
	   return 0;  
}
       
	 
