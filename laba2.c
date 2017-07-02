#include <stdio.h>


int main()
{
    int a[100], i, j, max = -13873, k = 0;

    scanf("%d", &a[0]);
    i = 1;
    while (scanf("%d", &a[i]) == 1)
        i++;
    for (j = 0; j < i; j++)
    {
        if (a[j] >= max)
        {
            if (a[j] > max)
                max = a[j];
            else
                k++;
        }
    }
    printf("%d", k);
    return 0;
}
