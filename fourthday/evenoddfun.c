//#include<conio.h>
#include<stdio.h>
int number(int num)
{
    for(int i=1;i<=num;i++)
    {
    if (i%2==0)
    {
        printf("\n %d",i);
    }

    }   
  return 0;
}
int main()
{
    int num;
    printf("enter any value");
    scanf("%d",&num);
    
    number(num);
    return 0;
}