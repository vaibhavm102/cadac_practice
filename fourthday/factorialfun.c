
//with return type & with parameter

//#include<conio.h>
#include<stdio.h>
int factorial(int fact ,int n)
{
   for (int i = 1; i <= n; i++)
   {

     fact=fact*i;
         
   }
   printf("factorial is %d",fact);
  return 0;
}
int main()
{
    int fact=1,n;
    printf("enter any no");
    scanf("%d",&n);
    factorial(fact,n);
    return 0;
}