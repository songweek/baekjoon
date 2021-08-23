#include <stdio.h>
#include <math.h>

int main(void)
{
	int H, M;

	scanf("%d %d", &H, &M);

	0 <= H && H <= 23;
	0 <= M && M <= 59;

	M = M - 45;

	if (M < 0)
	{
		H = H - 1;
		M = 60 + M;
	}

	if (H < 0)
	{
		H = 23;
	}
	printf("%d %d", H, M);
}
