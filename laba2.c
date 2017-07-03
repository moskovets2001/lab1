#include <stdio.h>


int main()
{
    int a[100], i, n, k = 1, max1;

   while (scanf("%d", &n) == 0)
    i = 1;
    max1 = n;
    while (scanf("%d", &n) == 1)
    {
        if (n >= max1)
        {
            if (n > max1)
            {
                max1 = n;
                k = 1;
            }
            else
                k++;
        }
        i++;
    }
    if (i == 1)
        printf("INCORECT iNPUT\n");
    printf("%d", k);
    return 0;
}
