#include <stdio.h>
int main()
{
    char score[80] = { 0, };
    char number[2];
    int a, i, j, c, mean, s;
    scanf("%d", &a);
    number[0] = 'O';
    number[1] = 'X';
    s = 1;
    for (i = 0; i < a; i++)
    {
        scanf("%s", score);
        mean = 0;
        s = 1;
        for (j = 0; j < 80; j++)
        {

            if (score[j] == number[0])
                mean = mean + s;
            s = s + 1;
            if (score[j] == number[1])
                s = 1;
        }
        printf("%d\n", mean);
        for (c = 0; c < 80; c++)
        {
            score[c] = 0;
        }
    }
    return 0;
}

