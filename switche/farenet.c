#include <stdio.h>

int main()
{
    //2.WAP to convert temperature from Celsius to Fahrenheit and vice versa.
    float a, b, celsius, fahrenheit;
    int x;
    printf("Press 1 For Convert Fahrenheit To Celsius\n");
    printf("Press 2 For Convert Celsius To Fahrenheit\n");
    printf("\nEnter Your Choice: ");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("\nEnter The Temperature in Fahrenheit: ");
        scanf("%f", &a);
        celsius = 5 * (a - 32) / 9;
        printf("\n\nCelsius Temperature is: %f ", celsius);
        break;
    case 2:
        printf("\nEnter The Temperature in Celsius: ");
        scanf("%f", &b);
        fahrenheit = ((9 * b) / 5) + 32;
        printf("\n\nFahrenheit Temperature is: %f ", fahrenheit);
        break;
    default:
        printf("\n\nWrong Choice.....Try Again!!!\n");
    }
    return (0);
}