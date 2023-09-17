#include<stdio.h>
int main()
{
    int a[3][3],i,j,add=0;
    printf("\n enter elememnts for matrix");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }    
    }
         
        printf("\n");
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
        for ( j = 0; j < 3; j++)
        {
            if((i+j==1)||(i+j==3))
            {
                  printf(" %d \n",a[i][j]);
                  add = add + a[i][j];
               
            }
            
        }
       
      }
        printf("%d",add);
    
}