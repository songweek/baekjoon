#include <stdio.h>

int main(void)
{
	int t, a, b, c;

	scanf("%d", &t);

	for (c = 1; c <= t; c++)
	{
		scanf("%d %d", &a, &b);
		if (0 < a && b < 10)
			printf("%d\n", a + b);
	}
	return 0;
}
