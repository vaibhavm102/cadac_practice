#include<stdio.h>
int main()
{
    //  int a=123,temp,rem,ans=0;
     //printf("Enter any no");
    int a,b,c,d;
    scanf("%d",&a);
    // scanf("%d",&b);
    // scanf("%d",&c);
    // scanf("%d",&d);
    
    int ansa=a/1000;
    int ansb=a/100%10;
    int ansc=a/10%10;
    int ansd=a%10;

    printf("%d",ansd);
    printf("%d",ansc);
    printf("%d",ansb);
    printf("%d",ansa);

   
    //  while (a != 0)
    //  {
    //      rem = a%10;
    //      ans = (ans*10)+rem; 
    //      temp = temp/10;
    //  }

     //printf("%d",ans);
     return 0;
}
    /* 
    int n, reverse = 0, remainder;

  printf("Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("Reversed number = %d", reverse);

  return 0;

*/