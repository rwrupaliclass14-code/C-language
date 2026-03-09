#include <stdio.h>

int main()
 {
    int a[5] = {1,2,3,4,5};

    int i,sum=0; // Declaring array of size n
    
    
    for(i=1; i<=5; i++) 
	{
        sum += i;
 
    }

    printf("Sum: %d\n", sum);
    
}

