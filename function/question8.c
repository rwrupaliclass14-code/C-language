#include<stdio.h>

//wap to print start to end using function.

void print(int n1, int n2)
{
	printf("%d\n",n1);
	if(n1<n2)
	{
	   n1++;
		print(n1,n2);
	}
}

void main()
{
  int n1;
  printf("Enter n1 :");
  scanf ("%d",&n1);
  
  int n2;
  printf("Enter n2 :");
   scanf ("%d",&n2);
    
   print(n1,n2);
}
