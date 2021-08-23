#include <stdio.h>
int main() {
    int b, i, j;
    int a[10];
    int c[42] = { 0, };

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        a[i] = a[i] % 42;
        c[a[i]]++;
    }
    b = 0;
    for (i = 0; i < 42; i++)
    {
        if (c[i] != 0)
        {
            b++;
        }
    }
    printf("%d", b);
    return 0;
}