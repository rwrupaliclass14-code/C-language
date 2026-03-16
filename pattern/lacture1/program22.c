#include<stdio.h>

void main()
{
	/*  A
        B C
        D E F
        G H I J
        K L M N O
	*/
	
	char i,j,a='A';
	
	for(i='A'; i<='E'; i++)
	{
		for(j='A'; j<=i; j++)
		{
			printf("%c ",a);
			a++;
		}
		printf("\n");
	}
}
