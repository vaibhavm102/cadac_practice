#include<stdio.h>

int main()
{
    char ch;
    printf("Enter any char");
    scanf("%c",&ch);

    switch (ch)
    {
    case'a': printf("is vowel");
        break;
    case'e' :printf("is vowel ");
        break;
     case 'i': printf("is vowel");
        break;
    case 'o': printf("is vowel");
       break;
    case 'u': printf("is vowel");
        break;
    case 'A': printf("is vowel");
        break;
    case 'E': printf("is vowel");
        break;   
    case 'I': printf("is vowel");
        break;   
    case 'O': printf("is vowel");
        break;   
    case 'U': printf("is vowel");
        break;   
    


    default:
        break;
    }
}