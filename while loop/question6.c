#include<stdio.h>

void main ()
{
	//Wap to print even number from n to 1 using while loop
	int n;
	printf("enter n :");
	scanf("%d",&n);
	
while(n>=1)
{
	if (n%2==0)
	{
		printf("%d, ",n);
	}
	n--;
}
	

}
