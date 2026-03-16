#include<stdio.h>

void main()
{
/*

* * * 
*     *
*    *
* * *
*    *
*     *
* * *

*/

     int i,j;
     
     for(i=1; i<=7; i++)
     {
     	for(j=1; j<=3; j++)
     	{
     	 if(i==1 || i==4 || i==7 || j==1)
     	
		   {

                printf("* ");
            } 
			else if((i==2&&j==3 && i==4&&i==5&&i==6)||j==3)
			 {
                printf("* "); 
		     }
		     else
		     {
		     	printf("  ");
			 }
	    }
	    printf("\n");
    }
}

