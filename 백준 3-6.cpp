#include <stdio.h>

int main(void)
{
	int t, n, b;

	scanf("%d", &n);
	if (n <= 100000)
	{
		for (; 0 < n; n = n - 1)
		{
			printf("%d\n", n);
		}
	}
	return 0;
}

