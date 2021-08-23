#include <stdio.h>

int main(void)
{
	int a, b;
	double c, d, f;
	scanf("%d %d", &a, &b);
	c = a;
	d = b;
	f = c / d;
	printf("%.9lf", f);
	return 0;
}
