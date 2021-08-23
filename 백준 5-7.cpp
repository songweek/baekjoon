#include <stdio.h>
int main()
{
    float score[999];
    int a, i, b, j;
    float mean, c, d, e;
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        c = 0;
        d = 0;
        scanf("%d", &b);
        for (j = 0; j < b; j++)
        {
            scanf("%f", &score[j]);
        }
        for (j = 0; j < b; j++)
        {
            c = c + score[j];
        }
        mean = c / b;
        for (j = 0; j < b; j++)
        {
            if (score[j] > mean)
                d++;
        }
        e = d / b * 100;
        printf("%.3f%%\n", e);

    }
    return 0;
}