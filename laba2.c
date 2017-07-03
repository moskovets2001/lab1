#include <stdio.h>


int main()
{
    int n, schet = 1, max, y;


    y = scanf("%d", &n);
    if (y == 0)
        printf("INCORECT INPUT\n");
    else
    {
        max = n;
        while (scanf("%d", &n) == 1)
        {
            if (n > max)
            {
                max = n;
                schet = 1;
            }
            else if (n == max)
                schet++;
        }
        printf("%d", schet);
    }
    return 0;
}
