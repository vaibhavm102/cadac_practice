#include<stdio.h>

int main()
{
     
    int a,sum=0,mod;
    printf("Enter any no");
    scanf("%d",&a);

    while (a>0)
    {
      mod = a % 10;
      sum = sum + mod;
      a=a/10;
    }
    printf("%d",sum);
    
    return 0;
    
}