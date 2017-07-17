#include <stdio.h>

void swap_(int *a, int *b);
int main()
{
    int a, b, *k, *l;
    scanf("%d%d", &a, &b);
    swap_(&a, &b);
    printf("%d %d", a, b);
    return 0;
}
void swap_(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
