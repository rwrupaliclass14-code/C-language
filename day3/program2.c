#include<stdio.h> //header file 

void main () //main function
{
	//wap to find min. from given 5 no. using nested if else.
	
	//we have declaired intiger variable a,b,c,d and e
	int a,b,c,d,e;   
	//we are printing a massage enter a by using printf function     
	printf("enter a");   
	//we are getting a i/p in variable a by using scanf function
	scanf("%d",&a);
		//we are printing a massage enter a by using printf function
	printf("enter b");
	//we are getting a i/p in variable a by using scanf function
	scanf("%d",&b);
		//we are printing a massage enter a by using printf function
	printf("enter c");
	//we are getting a i/p in variable a by using scanf function
	scanf("%d",&c);
		//we are printing a massage enter a by using printf function
	printf("enter d");
	//we are getting a i/p in variable a by using scanf function
	scanf("%d",&d);
		//we are printing a massage enter a by using printf function
	printf("enter e");
	//we are getting a i/p in variable a by using scanf function
	scanf("%d",&e);
	
	//compared a to b, a lessthan b
	if(a<b) 
	
	{
		//compared a to c, a lessthan c
		if(a<c) 
		{
			//compared a to d, a lessthan d
			if(a<d)  
			{
				//compared a to e, a lessthan e
				if(a<e)
				{
					//we are printing a massage a is min by using printf function 
					printf("a is min");
				}
				else
				{
					//we are printing a massage e is min by using printf function 
					printf("e is min");
				}
			}
			else
			{
				//compared d to e, d lessthan e
				if(d<e)
				{
					//we are printing a massage d is min by using printf function 
					printf("d is min");	
				}
				else
				{
					//we are printing a massage e is min by using printf function 
					printf("e is min");
				}
			}
		}
		else
		{
			//compared c to d, c lessthan d
			if(c<d)
			{
				//compared c to e, c lessthan e
				if(c<e)
				{
					//we are printing a massage c is min by using printf function 
					printf("c is min");
				}
				else
				{
					//we are printing a massage e is min by using printf function 
					printf("e is min");
				}
			
			}
			else
			{
				//compared d to e, d lessthan e
			     if(d<e)
			     {
			     	//we are printing a massage d is min by using printf function 
			     	printf("d is min");
				 }
				 else
				 {
				 	//we are printing a massage d is min by using printf function 
				 	printf("e is min");
				 }
			}
		}
	}
	else
	{
		//compared b to c, b lessthan c
		if(b<c)
		{ 
		//compared b to d, b lessthan d
		    if(b<d)
			{
				//compared b to e, b lessthan e
				if(b<e)
				{
					//we are printing a massage b is min by using printf function 
					printf("b is min");
				}
				else
				{
					//we are printing a massage e is min by using printf function 
					printf("e is min");
				}
			}
			else
			{
				//compared d to e, d lessthan e
				if(d<e)
				{
					//we are printing a massage d is min by using printf function 
					printf("d is min");
				}
				else
				{
					//we are printing a massage e is min by using printf function 
					printf("e is min");
				}
			}	
		}
		else
		{
			//compared c to d, c lessthan d
			if(c<d)
			{
				//compared c to e, c lessthan e
				if(c<e)
				{
					//we are printing a massage c is min by using printf function 
				    printf("c is min");	
				}
				else
				{
					//we are printing a massage e is min by using printf function 
					printf("e is min");
				}
			}
			else
			{
				//compared d to e, d lessthan e
				if(d<e)
				{
				//we are printing a massage d is min by using printf function 	
					printf("d is min");
				}
				else
				{
					//we are printing a massage e is min by using printf function 
					printf("e is min");
				}
			}
		}
	}
}
