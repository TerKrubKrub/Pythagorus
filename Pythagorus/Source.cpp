#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c;
	scanf_s("%f %f", &a, &b);
	if (a >= 0 && b >= 0)
	{
		printf("%f", sqrt((a * a) + (b * b)));
	}
	else printf("Error");
	return 0;
}