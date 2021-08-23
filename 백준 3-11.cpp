#include <stdio.h>

int main(void)
{
	int x, y, z, a;

	scanf("%d %d", &x, &y);

	for (z = 1; z <= x; z++)
	{
		scanf("%d", &a);
		if (a < y)
			printf("%d ", a);
	}
	return 0;
}