#include <stdio.h>

void swap_(float *a, float *b);
int main()
{
    float a, b;
    scanf("%f%f", &a, &b);
    swap_(&a, &b);
    printf("%f %f", a, b);
    return 0;
}
void swap_(float *a, float *b)
{
    float tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
