#include <stdio.h>

int main(void)
{
	int t, n, b;

	scanf("%d", &n);
	if (n <= 100000)
	{
		for (b = 1; b <= n; b++)
		{
			printf("%d\n", b);
		}
	}
	return 0;
}
