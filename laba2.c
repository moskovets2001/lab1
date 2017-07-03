#include <stdio.h>


int main()
{
    int i, n, j = 1, max1, y;


    y = scanf("%d", &n);
    if (y == 0)
        printf("INCORECT INPUT\n");
    else
    {
        i = 1;
        max1 = n;
        while (scanf("%d", &n) == 1)
        {
            if (n > max1)
            {
                max1 = n;
                j = 1;
            }
            else if (n == max1)
                j++;
            i++;
        }
        printf("%d", j);
    }
    return 0;
}
