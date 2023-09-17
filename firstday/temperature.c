#include<stdio.h>

int main()
{
  float fahr,celc;
  printf("Enter fahrenheit");
  scanf("%f",&fahr);
 
  celc = (fahr - 32)/1.8;
  printf("%.2f",celc);

  return 0;

}