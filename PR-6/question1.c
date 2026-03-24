#include<stdio.h>

void main()
{
	/* Q.1 Palindrome checker
	       Devlop a program thats check whether a given string is a pelindrom or not without using string function. */
	       
	   char name[50];
	   char rev [50];
	   int i,j,check=0,length=0;
	   printf("Enter any string :");
	   gets(name);
	   
	  while(name[length]!=NULL)
	  {
	  	length++;
	  }
	  printf("\nlength of string :%d\n",length);
	  
	  j=length-1;              // 1
	  for(i=0; i<length; i++)  // 0
	  {
	  	rev[i] = name[j];       //0 to 4 mona 
	  	j--;                    // 4 to 0 anom 
	  }
	     printf("\n revers string is %s",rev);  
	     
	     printf("\n");
	     
	     for(i=0; i<length; i++)
	     {
	     	if (name[i]!= rev[i])  //mona != anom check one by one
	     	{
	     		check=1;
	     		break; 
			 }
		 }
		 if(check==0)
		 {
		 	printf("\nThe given string is a palindrome :");
		 }
		 else
		 {
        	printf("\nThe given string is not palindrome :");		 
		}
}
