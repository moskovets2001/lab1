#include <stdio.h>


int main()
{
    int a[100], i, j, k = 0, max1;

    scanf("%d", &j);
    i = 1;
    max1 = j;
    while (scanf("%d", &j) == 1)
    {
        if (j >= max1)
        {
            if (j > max1)
            {
                max1 = j;
                k = 1;
            }
            else
                k++;
        }
        i++;
    }
    if (i == 1)
        printf("INCORECT iNPUT\n");

    printf("%d", k++);
    return 0;
}
