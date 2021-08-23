#include <stdio.h>

int main(void)
{
	int a, b, c, d, f, g, h, i;
	scanf("%d %d %d", &a, &b, &c);
	d = (a + b) % c;
	f = (((a % c) + (b % c)) % c);
	h = (a * b) % c;
	i = ((a % c) * (b % c)) % c;
	printf("%d\n", d);
	printf("%d\n", f);
	printf("%d\n", h);
	printf("%d\n", i);
	return 0;
}