#include <stdio.h>

int main(void)
{
	int a, b, c, d, e;
	scanf("%d %d", &a, &b);
	c = b % 10;
	d = (b % 100) / 10;
	e = b / 100;

	printf("%d\n", a * c);
	printf("%d\n", a * d);
	printf("%d\n", a * e);
	printf("%d", a * b);

	return 0;
}
