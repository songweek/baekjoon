#pragma warning(disable:4996)
#include<stdio.h>

int main()
{
    int e[10000];
    int abc[10000];
    int a, b, c, d, f, g, sum, n, m;
    m = 1;
    for (n = 0; n < 10000; n++)
    {
        abc[n] = m;
        m = m + 1;
    }
    for (n = 0; n < 10000; n++)
    {
        a = n / 1000;
        f = n / 100;
        b = f % 10;
        g = n / 10;
        c = g % 10;
        d = n % 10;
        sum = 0;

        if (n >= 1000)
        {
            sum = n + a + b + c + d;
            e[n] = sum;
        }
        if (n >= 100 && n < 1000)
        {
            sum = n + f + c + d;
            e[n] = sum;
        }
        if (n >= 10 && n < 100)
        {
            sum = n + g + d;
            e[n] = sum;
        }
        if (n < 10)
        {
            sum = n + d;
            e[n] = sum;
        }

    }

    for (int h = 0; h < 10000; h++)
    {
        for (int i = 0; i < 10000; i++)
        {
            if (e[h] == abc[i])
                abc[i] = 0;
        }
    }
    for (int i = 0; i < 10000; i++)
    {
        if (abc[i] != 0)
            printf("%d\n", abc[i]);
    }

    return 0;
}