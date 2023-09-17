#include<stdio.h>
int main()
{
    int p,n,r;
    float si;
 
   printf("enter value for principle");
   scanf("%d",&p);
   printf("enter value for rate of intrest");
   scanf("%d",&r);
   printf("enter value for time");
   scanf("%d",&n);
   
   si=(p*r*n)/100;
   printf("%.2f",si);

return 0;
}