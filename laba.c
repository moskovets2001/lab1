#include <stdio.h>
#include <math.h>
#define  EPS  0000000.1
//using namespace std;

int main()
{
double a, b, c, d, i, i1, k;



k = scanf("%lf", &a);
if(k != 1)
{
    printf("incorect input");
    return 0;
}
k = scanf("%lf", &b);
if(k != 1)
{
    printf("incorect input");
    return 0;
}
k = scanf("%lf", &c);
if(k != 1)
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
 printf("kotney net");
 return 0;
}


i = ((-b + sqrt(d))/(2*a));
i1 = ((-b - sqrt(d))/(2*a));
printf("1 koren %lf\n", i);
printf("2 koren %lf", i1);
return 0;
}
