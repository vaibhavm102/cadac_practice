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
    
      printf("add of matrix is==> \n");   
      for (i = 0; i < 3; i++)
      {
        for ( j = 0; j < 2; j++)
        {
            add =a[0][0]+a[1][1]+a[2][2]+a[0][2]+a[1][1]+a[2][0];
            
        }
      }
      printf("%d",add);
}