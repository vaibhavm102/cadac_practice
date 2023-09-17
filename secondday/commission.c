#include<stdio.h>

int main()
{
    int sale_amt,commi;

    printf("Enter sale amount");
    scanf("%d",&sale_amt);

    if (sale_amt > 1000)
    {
        commi = sale_amt*15/100;
        printf("amount after commission is ==>%d",commi);
    }
    else
    {
        printf("no commission on amt");
    }
    return 0;
}