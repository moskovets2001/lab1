#include <stdio.h>


int main()
{
    int a[100], i, j, k = 0, max1;

    scanf("%d", &a[0]);
    i = 1;
    max1 = a[0];
    while (scanf("%d", &a[i]) == 1)
    {
        if (a[i] >= max1)
        {
            if (a[i] > max1)
            {
                max1 = a[i];
                k = 1;
            }
            else
                k++;
        }
        i++;
    }


    printf("%d", k++);
    return 0;
}
