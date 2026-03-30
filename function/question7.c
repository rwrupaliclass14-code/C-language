#include<stdio.h>

//wap to print 1 to n using function.

void print(int i, int n)
{
	printf("%d\n",i);
	if(i<n)
	{
		i++;
		print(i,n);
	}
}

void main()
{
	int n;
	printf("Enter input :");
	scanf("%d",&n);
	
    print(1,n);
}
