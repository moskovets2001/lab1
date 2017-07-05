#include <stdio.h>

int check(int n);



int main()
{
    int n;
    scanf("%d", &n);
    if (check(n))
        printf("true");
    else
        printf("false");
    return 0;
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
