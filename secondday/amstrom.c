#include<stdio.h>
int main()
{
    int num,r,c,sum=0,temp;
    
    scanf("%d",&num);
    temp=num;

    while(num!=0)
    {
        r=num%10;
        c=r*r*r;
        sum = sum+c;
        num = num/10;
    }
    if(temp==sum)
    {
        printf(" number is armstrom");
    }
    else
    {
    printf(" number is not armstron");
    }
 return 0;   
}