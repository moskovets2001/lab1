#include <stdio.h>


int main()
{
    int a[100], i, n, k = 1, max1, y;


    y = scanf("%d", &n);
    if (y == 0)
        printf("INCORECT iNPUT\n");
    else
    {
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
        printf("%d", k);
    }
    return 0;
}
