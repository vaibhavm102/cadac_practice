#include<stdio.h>

int main()
{
  int remainder;
  int quotient, divident , divisor;

   printf("Enter divident");
   scanf("%d",&divident);
   
   printf("Enter divisor");
   scanf("%d",&divisor);

    quotient = divident/divisor;
    printf("qoutiant is ==> %d\n",quotient);
    
    remainder = divident % divisor;
    //remainder = divident - (divisor * quotient);
    printf("remainder isss==>%d",remainder);


    return 0;

}