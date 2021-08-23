#include <stdio.h>

int main() {
    int yaho[15];
    char world[15];
    int a = 0;

    scanf("%s", world);
    for (int i = 0; world[i] != 0; i++)
    {

        if (world[i] == 'A' || world[i] == 'B' || world[i] == 'C')
            a += 3;

        if (world[i] == 'D' || world[i] == 'E' || world[i] == 'F')
            a += 4;

        if (world[i] == 'G' || world[i] == 'H' || world[i] == 'I')
            a += 5;

        if (world[i] == 'J' || world[i] == 'K' || world[i] == 'L')
            a += 6;

        if (world[i] == 'M' || world[i] == 'N' || world[i] == 'O')
            a += 7;

        if (world[i] == 'P' || world[i] == 'Q' || world[i] == 'R' || world[i] == 'S')
            a += 8;

        if (world[i] == 'T' || world[i] == 'U' || world[i] == 'V')
            a += 9;

        if (world[i] == 'W' || world[i] == 'X' || world[i] == 'Y' || world[i] == 'Z')
            a += 10;

    }


    printf("%d", a);
    return 0;
}