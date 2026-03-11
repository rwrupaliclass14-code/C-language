#include<stdio.h>

void main()
{
	//Q.2 devlop a program that prints the floyed triangle pattern using nested loop.
	
	/* 11
	   12 13
	   14 15 16
	   17 18 19 20
	*/
	
	int i,j,num=11;
	
	for(i=1; i<5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",num);
			num++;
		}
		printf("\n");
	}
}
