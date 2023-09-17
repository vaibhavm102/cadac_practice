#include<stdio.h>
int main()
{
    
int p,n,r;
float si;

printf("Enter value for p");
scanf("%d",&p);

printf("Enter value for n");
scanf("%d",&n);


printf("Enter value for r");
scanf("%d",&r);

si = (p*n*r)/100;
printf("%.2f",si);

return 0;
}