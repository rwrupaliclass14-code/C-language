#include<stdio.h>

void main()
{
	/* Q.2 Frequency checker 
	       Extend the program to count the frequency of each charactor in a given string */
	
	char name [50];
	int i, j; 
	 printf("Enter any string :");
	 gets(name);
	 
	 int n = strlen(name);
	 printf("string of %s",name);
	 printf("\n");
	 
	 for(i=0; i<n; i++) //Devlopment -> i=0 - D
	 {

	 	int count = 1;  //count =1 rest the value 
	 	
	if(name[i]!=NULL) //the condition is true , below code will be skip in next iteration will start
	{
		 
	 	for(j=i+1; j<n; j++)
	 	{
	 		if(name[i]==name[j]) // e compare with e
	 		{
	 		  count++;	        // count 1 in e=2 
	 		  name[j]=NULL;    // null e
			 }
		 }
    
		 printf("%c = %d\n",name[i],count);
    }
	 }
	 
	 
}
