#include<stdio.h>

int main()
{
    int marks;
    scanf("%d",&marks);
  if(marks >= 80)
        printf("Grade = A");
     if(marks >= 60)
         if(marks < 80)
        printf("Grade = B");
     if(marks >= 50)
        if(marks < 60)
        printf("Grade = C");
     if(marks >= 45)
        if (marks < 50)
        printf("Grade = D"); 
     if(marks >= 25) 
        if(marks < 45)
        printf("Grade = E");
     else
        printf("Grade = F");

return 0;
}