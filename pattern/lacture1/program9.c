#include<stdio.h>

void main()
{
	/* 1 1 1 1 1
	   2 2 2 2
	   3 3 3
	   4 4
	   5
	*/
	
	int i,j;
	
	for(i=1; i<=5; i++)  //outer - raw       1<=5 true      
	{                                                  
		for(j=i; j<=5; j++)  //inner - coll  
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
