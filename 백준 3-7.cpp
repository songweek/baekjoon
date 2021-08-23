#include <stdio.h>

int main(void)
{
	int t, a, b, x;

	scanf("%d", &t);
	for (x = 1; x <= t; x++)
	{
		scanf("%d %d", &a, &b);
		if (0 < a && b < 10)
		{
			printf("Case #%d: %d\n", x, a + b);
		}
	}
	return 0;
}

