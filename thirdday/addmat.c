#include<stdio.h>
int main()
{
    int a[3][3],i,j,add;
    printf("\n enter elememnts for matrix");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }    
    }
         printf("\n ur matrix is \n");
        
        for( i = 0; i < 3; i++)
        {
            for( j = 0; j< 3; j++)
            {
               printf("\t %d",a[i][j]);
              
            }
            printf("\n");  
        }
 /////////////////////////////////////////////////////////////
    
      printf("add of elements 2 4 6 8 is==> \n");   
      for (i = 0; i < 3; i++)
      {
        for ( j = 0; j < 2; j++)
        {
            add =a[0][1]+a[1][0]+a[1][2]+a[2][1];
            
        }
            
      }
      printf("\t %d",add);  

        
    
    
}