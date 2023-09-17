#include<stdio.h>

int main()
{
     int year;
     printf("Enter year to check ");
     scanf("%d",&year);

     if(year % 4 == 0)
     printf("year is leaf year");
     else
     printf("year is not leaf year");



   
 return 0;    
}