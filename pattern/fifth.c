#include<stdio.h>

int main()
{
    int i,space,j;
    int rows;
    printf("Enter rows");
    scanf("%d",&rows);
 
    for ( i = rows; i >= 1; i--)
    {
        for ( space = 1; space <=rows-i; space++)
        {
            printf(" ");
        }
        for ( j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }
       printf("\n"); 
    }
 for ( i = 2; i <= rows; i++)
    {
        for ( space = 1; space <=rows-i; space++)
        {
            printf(" ");
        }
        for ( j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }
       printf("\n"); 
    }   
  return 0;  
}
