#include <stdio.h>

int main()
{
    int a, b, c, d, f, g, h, i, j;
    int e[9];
    scanf("%d %d %d", &a, &b, &c);
    d = a * b * c;

    f = 100000000;
    for (i = 0; i < 9; i++)
    {
        e[i] = d / f;
        d = d % f;
        f = f / 10;

    }

    d = a * b * c;

    g = 0;

    for (i = 0; i < 10; i++)
    {
        h = 0;
        for (j = 0; j < 9; j++)
        {
            if (e[j] == g)
                h++;
        }
        if (g == 0 && 10000000 < d && d < 100000000)
            h = h - 1;
        else if (g == 0 && d < 10000000)
            h = h - 2;

        printf("%d\n", h);
        g++;
    }
    return 0;
}
