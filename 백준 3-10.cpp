#include <stdio.h>

int main(void)
{
	int x, y, z, a, f, g;

	scanf("%d", &x);

	g = x - 1;
	for (y = 1; y <= x; y++)
	{
		for (z = g; 0 < z; z--)
		{
			printf(" ");
		}
		for (f = 1; f <= y; f++)
		{
			printf("*");
		}
		g = g - 1;
		printf("\n");
	}
	return 0;
}
