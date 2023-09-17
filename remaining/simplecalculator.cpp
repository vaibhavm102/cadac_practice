#include<stdio.h>
int main()
{
    char op;
    printf("\n Enter any operator :'+','-','*','/' : ");
    scanf("%c",&op);
    float num1,num2;
    printf("\n Enter the value of num1 and num2 ");
    scanf("%f %f",&num1,&num2);
    switch (op)
    {
     case '+':printf("addition is==>%2.f",num1+num2);
             break;
     case '-':printf("substraction is ==>%2.f",num1-num2);
             break;        
     case '*':printf("multiplication is ==> %2.f",num1*num2);
             break;  
     case '/':printf("division is ==> %2.f",num1/num2);
             break;        
    

    
    
    default:printf("\n not specified");
        break;
    }


}