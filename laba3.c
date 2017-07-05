#include <stdio.h>

int check(int n);



int main()
{
    int n, y, schet = 0;

    y = scanf("%d", &n);
    if (y == 0)
        printf("INCORECT INPUT\n");
    else
    {
        while (scanf("%d", &n) == 1)
        {

            if (check(n))
                schet++;
        }
    }
        printf("%d", schet+1);
}
int check(int n)
{
    int i, f_1, f_2;
    i = 1;
    f_1 = 1;
    f_2 = 1;
    while (i < n)
    {
        i = f_1 + f_2;
        f_1 = f_2;
        f_2 = i;
    }
    if (i == n)
        return 1;
    else
        return 0;
}
