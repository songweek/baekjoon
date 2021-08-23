#include <stdio.h>
int main()
{
    int a, b, c;
    c = 0;
    while (c != EOF)
    {
        c = scanf("%d %d", &a, &b);

        if (c != EOF)
            printf("%d\n", (a + b));
    }
    return 0;
}

