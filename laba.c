#include <stdio.h>
#include <math.h>
#include <windows.h>
#define  EPS  0000000.1


int main()
{
double a, b, c, d, i, i1, k;



k = scanf("%lf%lf%lf", &a, &b, &c);
if(k != 3)
{
    printf("incorect input");
    return 0;
}

d = b*b - 4*c*a;
if(fabs(d) < EPS)
{
    printf("tolko odno reshenie - %lf", (-b/(2*a)));
    return 0;
}
if(d < 0)
{
 printf("korney net");
 return 0;
}


i = ((-b + sqrt(d))/(2*a));
i1 = ((-b - sqrt(d))/(2*a));
 Beep(2000,700);
 Beep(1900,700);
 Beep(1800,700);
 Beep(1700,700);
 Beep(1600,700);
 Beep(2100,700);
 Beep(1600,700);

printf("rishennya priynyato:\n", i);
printf("1 koren %lf\n", i);
printf("2 koren %lf", i1);
return 0;
}
