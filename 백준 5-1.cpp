#include <stdio.h>

int main()
{
    int a, b, i, max, min;
    scanf("%d", &a);
    max = -1000001;
    min = 1000001;
    for (i = 1; i <= a; i++)
    {
        scanf("%d", &b);
        max = (b < max) ? max : b;
        min = (min < b) ? min : b;
    }
    printf("%d %d", min, max);
    return 0;
}