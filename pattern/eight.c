#include<stdio.h>

int main()
{
    int i,j, rows=5,space;
    for ( i = 1; i <= rows; i++)
    {
        for ( space = 1; space<rows-i; space++)
        {
            printf(" ");
        }

     for ( j = 1; j <=2*i-1; j++)
     {
        if(i==1||i==rows|| j==1||j==rows)
        printf("*");
       else
        printf(" ");
     }
     printf("\n");
    }
     return 0;
    
    
return 0;
}