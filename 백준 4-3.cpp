#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g;
    scanf("%d", &a);
    d = a;
    f = 0;
    g = 0;
    while (a != f)
    {
        b = d / 10;
        c = d % 10;
        e = b + c;
        d = (c * 10) + (e % 10);
        f = d;
        g++;
    }
    if (a == 0)
        g = 1;
    printf("%d\n", g);
    return 0;
}