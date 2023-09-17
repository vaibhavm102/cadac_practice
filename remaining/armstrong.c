#include<stdio.h>
int main()
{
    int i,a,r,n,sum=0;
   
    printf("Enter any no");
    scanf("%d",&n);
     int temp=n;

    for ( i = 1; i <=n; i++)
    {
        while (n>0)
        {
            r=n%10;
            sum=sum+r*r*r;
            n=n/10;
        }
        
    }
    if (temp==sum)
    {
        printf("num is armstrong");
    }
    else
    printf("no is not armstrong");

   // printf("%d",sum);
}