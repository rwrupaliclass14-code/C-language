#include<stdio.h>

void main()
{
	// WAP to get & print 2D array of N elements.
	
 int r,c,i,j;
 printf("Enter size of row :");
 scanf("%d",&r);
 printf("Enter size of coll :");
 scanf("%d",&c);
 
 printf("\n");
 
 int n[r][c];
 
 for(i=0; i<r; i++)
 {
 	for(j=0; j<c; j++)
 {
 	printf("enter n[%d][%d] ",i,j);
 	scanf("%d",&n[i][j]);
 }
  printf("\n");
 	
 }
 
         for (i = 0; i < r; i++) 
{
        for (j = 0; j < c; j++)
		 {
            printf("%d ", n[i][j]); 
        }
        printf("\n");
    }
}
