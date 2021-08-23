#include <stdio.h>

int main()
{
    int a, c = 0;
    char d[100];
    scanf("%d", &a);
    scanf("%s", d);
    for (int i = 0; i < a; i++)
        c = c + d[i] - 48;

    printf("%d", c);

    return 0;
}