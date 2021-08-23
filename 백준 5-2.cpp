#include <stdio.h>

int main()
{
    int a, d, i, max;
    int c[9];

    for (i = 0; i < 9; i++)
    {
        scanf("%d", &c[i]);
    }
    max = 0;
    for (i = 0; i < 9; i++)
    {
        max = (max < c[i]) ? c[i] : max;
    }
    printf("%d\n", max);
    d = 0;
    for (i = 0; i < 9; i++)
    {
        if (max == c[i])
            d = i + 1;
    }
    printf("%d", d);
    return 0;
}
