#include <stdio.h>
int main()
{
    char a[27] = "abcdefghijklmnopqrstuvwxyz";
    char b[100];
    int c[26];

    scanf("%s", b);
    for (int i = 0; i < 26; i++)
        c[i] = -1;

    for (int i = 0; b[i] != 0; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (c[j] == -1)
            {
                if (a[j] == b[i])
                    c[j] = i;
            }
        }
    }
    for (int i = 0; i < 26; i++)
        printf("%d ", c[i]);
    return 0;
}