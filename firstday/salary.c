#include<stdio.h>
int main()
{
    double da,hra,pf,ta,basic_sal,gross_sal,net_sal;

     printf("plz enter basic salary");
     scanf("%lf",&basic_sal);
    da = 0.4 * basic_sal;
    hra = 0.24 * basic_sal;
    pf = 0.2 * basic_sal;
    ta = 0.3 * basic_sal;

    gross_sal = da + hra + ta;
    printf("gross sal is ==> %.2lf\n",gross_sal);
 
    net_sal = gross_sal - pf;
    printf("%.2lf",net_sal);


return 0;
}

