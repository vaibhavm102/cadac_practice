#include<stdio.h>

int main()
{
    int total_amt , purches_amt , discount;

    printf("Enter purchase amount");
    scanf("%d",&purches_amt);

    if (purches_amt > 1500)
    {
        discount = purches_amt - 200;
        printf("amount after discount of 200 ==> %d",discount);
    }
    else
    {
        printf("no discount applide ==> %d",purches_amt);
    }
    return 0;
}