#include<stdio.h>

int main()
{
    int cp,sp;
    printf("Enter cost price of item");
    scanf("%d",&cp);

    printf("Enter selling price of item");
    scanf("%d",&sp);
    
    if (cp < sp)
    {
        printf("has an profit");
    }
    else if (cp ==  sp)
    {
       printf("nothing");
    }
    else
    printf("has an los");
    

    return 0;
    
}