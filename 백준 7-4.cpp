#include <stdio.h>
int main()
{
    char a[20];
    int cas, number;

    scanf("%d", &cas);
    for (int i = 0; i < cas; i++)
    {
        scanf("%d", &number);
        for (int j = 0; j < 20; j++)
            a[j] = 0;
        scanf("%s", a);

        for (int g = 0; g < 20; g++)
            for (int h = 0; h < number; h++)
            {
                if (a[g] != 0)
                    printf("%c", a[g]);
            }
        printf("\n");

    }
    return 0;
}