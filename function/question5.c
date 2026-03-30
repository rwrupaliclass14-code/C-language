#include<stdio.h>

// wap to print hello world 10 times..

void hello(int i)
{
	printf("Hello World \n");
	if (i<10)
	{
		i++;
		hello(i);
	}
}

void main()
{
	hello(1);
}
