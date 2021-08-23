#include <stdio.h>
int main()
{
    float score[999];
    int a, i, max;
    double mean;
    scanf("%d", &a);

    for (i = 0; i < a; i++)
    {
        scanf("%f", &score[i]);
    }
    max = 0;
    for (i = 0; i < a; i++)
    {
        max = (max < score[i]) ? score[i] : max;
    }

    for (i = 0; i < a; i++)
    {
        score[i] = (score[i] / max) * 100;
    }
    mean = 0;
    for (i = 0; i < a; i++)
    {
        mean = mean + score[i];
    }
    mean = mean / a;

    printf("%.2lf", mean);
    return 0;
}