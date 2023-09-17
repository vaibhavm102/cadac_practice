// Program to create a simple calculator
#include <stdio.h>

int main() {
    char operation;
    int n1, n2;

    printf("Enter an your choice (+, -, *, /): ");
    scanf("%c", &operation);
    printf("Enter two values: ");
    scanf("%d%d",&n1, &n2);

    switch(operation)
    {
        case '+':
            printf("%d + %d= %d",n1, n2, n1+n2);
            break;

        case '-':
            printf("%d - %d = %d",n1, n2, n1-n2);
            break;

        case '*':
            printf("%d * %d = %d",n1, n2, n1*n2);
            break;

        case '/':
            printf("%d / %d = %d",n1, n2, n1/n2);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }

    return 0;
}