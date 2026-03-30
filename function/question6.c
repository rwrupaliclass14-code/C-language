#include<stdio.h>

// wap to print 1 to 10 without using loop

void print(int i)
{
	printf("%d\n",i);
	if(i<10)
	{
		i++;
		print(i);
	}
}

void main()
{
	print(1);
}
