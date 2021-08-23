#include <stdio.h>

int main(void)
{
	int n, a, b;

	scanf("%d", &n);
	b = 0;
	for (a = 1; a <= n; a++)
	{
		b = b + a;
	}
	printf("%d", b);
	return 0;
}