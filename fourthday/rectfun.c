
//with return type & without parameter

//#include<conio.h>
#include<stdio.h>
int area(int len ,int wid)
{
   int rect = len*wid;
   printf("Area of rect=> %d",rect);
  return 0;
}
int main()
{
    int len,wid;
    printf("enter length");
    scanf("%d",&len);
    printf("enter width");
    scanf("%d",&wid);
    area(len,wid);
    return 0;
}