#include<stdio.h>

void main()
{
	/*     * * * * *
           * * * *
           * * *
           * *
           *
     */
	   
	   int i,j,a=1;
	   
	   for(i=5; i>=1; i--)  //outer-raw loop
	   {
	   	for(j=i; j>=1; j--)  // inner-col loop
	   	{
	   		printf("* ");
		}
		    printf("\n");
	   }
}
