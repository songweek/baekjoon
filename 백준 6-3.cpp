#include<stdio.h>

int main()
{
    int n, a, b, c, d, e, f, sum;
    scanf("%d", &n);
    sum = 0;
    e = 0;
    f = 0;
    for (int i = n; i > 0; i--)
    {
        a = i / 100;
        b = i / 10;
        c = b % 10;
        d = i % 10;
        if (i >= 100)
        {
            e = d - c;
            f = c - a;
            if (e == f)
                sum++;
        }
        if (i < 100)
        {
            sum++;
        }
    }
    printf("%d", sum);
    return 0;
}