#include<stdio.h>
int main()
{
    int a=0,b=1,c=0;
   int n=5;
    while(a<=n)
    {
        printf("%d",c);
        a=b;
        b=c;
        c=a+b;
        a++;
    }
return 0;
}
