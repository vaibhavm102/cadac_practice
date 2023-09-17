#include<stdio.h>
int main()
{
    int a;
    printf("enter any no");
    scanf("%d",&a);

    if(a%8==0 && a%5==0)
    {
       printf(" is divisible by 5 and 8");

    }

    else if(a%8==0)
     {
        printf(" is divisible by 8");
     }
    
     else if(a%5==0)
     {
        printf(" is divisible by only 5");
     }
    
     else if(a%5!=0 && a%8!=0)
     {
        printf(" is not divisible by 8 and 5");
     }
return 0;
}
