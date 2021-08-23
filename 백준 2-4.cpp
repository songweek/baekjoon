#include <stdio.h>
#include <math.h>

int main(void)
{
	int x, y;

	scanf("%d %d", &x, &y);

	-1000 <= x && x <= 1000 && x == !0;
	-1000 <= y && y <= 1000 && y == !0;

	if (1 <= x && x <= 1000 && 1 <= y && y <= 1000)
	{
		printf("1");
	}
	if (-1000 <= x && x <= -1 && 1 <= y && y <= 1000)
	{
		printf("2");
	}
	if (-1000 <= x && x <= -1 && -1000 <= y && y <= -1)
	{
		printf("3");
	}
	if (1 <= x && x <= 1000 && -1000 <= y && y <= -1)
	{
		printf("4");
	}
}