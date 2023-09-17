//#include<conio.h>
#include<stdio.h>
int area(int len)
{
   int square = len+len+len+len;
   printf("Area of square=> %d",square);
  return 0;
}
int main()
{
    int len;
    printf("enter length");
    scanf("%d",&len);
   
    area(len);
    return 0;
}