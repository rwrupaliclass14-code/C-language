#include <stdio.h>

void main() 

{
	
	//.WAP to perform cols-wise sum of 2D array.
	
    int rows, cols,i,j,sum=0;

    // 1. Get dimensions from user
    
    printf("Enter rows : ");
    
    scanf("%d", &rows);
    
     printf("Enter cols : ");
    
    scanf("%d", &cols);

    int arr[rows][cols];

    // 2. Input elements into the 2D array
    
    printf("\nEnter elements of the array:\n");
    
    printf("\n");
    
    for ( i = 0; i < rows; i++)
	 {
        for ( j = 0; j < cols; j++)
		 {
		 		printf("a[%d][%d]",i,j);
                scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    
    
    
     for (i = 0; i < rows; i++) 
{
        for (j = 0; j < cols; j++)
		 {
            printf("%d ", arr[i][j]); 
        }
        printf("\n");
    }
    

    // 3. Calculate and display row-wise sum
    
    printf("\nRow-wise sums:\n");
    
    for (j = 0; j < cols; j++) 
	{
		 sum = 0; // Reset sum for each new row
        
        for ( i = 0; i < rows; i++) 
		{
			
            sum += arr[i][j]; // Accumulate elements in current row
            
        }
        printf("Sum of cols %d = %d\n", j + 1, sum);
        
       
          
    }
}

