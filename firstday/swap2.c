#include<stdio.h>

int main()
{
    int a=10 , b=20,c;

    c=a;
    a=b;
    b=c;

    printf("%d",a);
    printf("%d",b);

    return 0;
}