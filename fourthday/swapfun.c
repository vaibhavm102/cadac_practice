//#include<conio.h>
#include<stdio.h>
int area(int a ,int b)
{
    int c;
    a=c;
    a=b;
    b=c;
   printf("after swap values are a=> %d",a);
   printf("after swap values are b=> %d",b);
  return 0;
}
int main()
{
    int a,b;
    printf("enter any value for a");
    scanf("%d",&a);
    printf("enter value for b");
    scanf("%d",&b);
    area(a,b);
    return 0;
}