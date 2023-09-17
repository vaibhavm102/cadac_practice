#include<stdio.h>

int main()
{
     
    int month;
    printf("Enter Month in number");
    scanf("%d",&month);

    if (month == 1)
    
        printf("Month is January");
    
   else if(month == 2)      
    printf("Month is  February");
    else if(month == 3)
    printf("Month is  March");
    else if(month == 4)
    printf("Month is  April");
    else if(month == 5)
    printf("Month is  May");
    else if(month == 6)
    printf("Month is  June");
    else if(month == 7)
    printf("Month is  July");
    else if(month == 8)
    printf("Month is  August");
    else if(month == 9)
    printf("Month is  September");
    else if(month == 10)
    printf("Month is  November");
    else if(month == 12)
    printf("Month is  December");

    else
    printf("no any wrong input");
    
    return 0;
    
}
