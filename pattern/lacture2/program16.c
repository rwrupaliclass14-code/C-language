#include<stdio.h>

void main()
{
	/*  A B C D E
          B C D E
            C D E
              D E
                E      */
	
	int i, j, k;
     // Number of rows

    // Outer loop for rows, decreasing from 5 down to 1
    for (i = 5; i >= 1; i--)
	 {
        
        // Inner loop for printing spaces before the characters
        for (k = 0; k < 5 - i; k++) {
            printf("  "); // Two spaces for alignment
        }

        // Inner loop for printing characters (A-E, B-E, etc.)
        for (j = 0; j < i; j++) {
            // ASCII value 'A' is 65.
            // Using (rows - i) to change the starting letter each row.
            printf("%c ", (char)('A' + (5 - i) + j));
        }

        // Move to the next line
        printf("\n");
    }
}

