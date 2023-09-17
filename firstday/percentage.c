#include<stdio.h>

int main()
{
     
    int s1,s2,s3,s4,s5;
    printf("Enter all 5 sub marks");
    scanf("%d",&s1);
    scanf("%d",&s2);
    scanf("%d",&s3);
    scanf("%d",&s4);
    scanf("%d",&s5);

    float per = (s1+s2+s3+s4+s5)/5;
    printf("got percentage %.2f \n",per);
    
    if (per > 80)
    {
        printf("got  A+ grade ");
    }
    if(per > 65 && per < 80)
    printf("got A grade");
    if (per > 50 && per < 65)
    printf("Got B grade");
    if (per > 42 && per < 50)
    printf("Got C grade");
    if ( per < 40)
    printf("Got fail ");
    

    
    
    
    return 0;
    
}