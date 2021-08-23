#include <stdio.h>

int main(void)
{
	int t, a, b, c;

	scanf("%d", &t);
	if (t <= 1000000)
	{
		for (c = 1; c <= t; c++)
		{
			scanf("%d %d", &a, &b);
			if (1 <= a && a <= 1000 && 1 <= b && b <= 1000)
				printf("%d\n", a + b);
		}
	}
	return 0;
}
