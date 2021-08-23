#include <stdio.h>

int main()

{
    int a, b, c, d, e, f, g, h, i, j, k, l;
    scanf("%d %d", &a, &b);
    c = a % 10;
    d = a / 10;
    e = d % 10;
    f = a / 100;
    g = b % 10;
    h = b / 10;
    i = h % 10;
    j = b / 100;

    k = c * 100 + e * 10 + f;
    l = g * 100 + i * 10 + j;

    if (k < l)
        printf("%d", l);

    if (l < k)
        printf("%d", k);


    return 0;

}