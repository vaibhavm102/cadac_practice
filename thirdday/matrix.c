#include<stdio.h>
int main()
{
    int a[2][2],i,j;
    printf("\n enter elememnts for matrix");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }    
    }
         printf("\n ur matrix is \n");
        
        for( i = 0; i < 2; i++)
        {
            for( j = 0; j< 2; j++)
            {
               printf("\t [%d][%d] %d",i,j,a[i][j]);
              
            }
            printf("\n");  
        }
        
        

        
    
    
}