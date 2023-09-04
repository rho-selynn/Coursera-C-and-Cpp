
// Read in Two Floats and Print Sum

#include <stdio.h>

int main(void)
{
	float a, b, c, sum;
	printf("Input three floats:");
	scanf("%f%f%f", &a, &b, &c);
	printf("a = %f, b = %f\n, c = %f\n", a, b, c);
	sum = a + b + c;
	printf("sum = %f\n\n", sum);
	return 0;
}
