#include <stdio.h>
int main()
{
    char voca[1000000];
    char big[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char small[26] = "abcdefghijklmnopqrstuvwxyz";
    int count[26];
    int a, b;
    a = 0;
    b = 0;

    scanf("%s", voca);

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; voca[j] != 0; j++)
        {
            if (big[i] == voca[j])
                count[i]++;

        }
    }

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; voca[j] != 0; j++)
        {
            if (small[i] == voca[j])
                count[i]++;

        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (a > count[i])
            a = a;
        else
            a = count[i];

    }

    for (int i = 0; i < 25; i++)
        if (a == count[i])
            b++;

    if (b > 1)
        printf("?");
    else
    {
        for (int i = 0; i < 26; i++)
        {
            if (a == count[i])
                printf("%c", big[i]);
        }
    }
    return 0;
}