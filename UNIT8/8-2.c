#include <stdio.h>

int main()
{
	float num1 = 0.0f;
	double num2 = 0.0;
	long double num3 = 0.01;

	printf("f: %d, d: %d, Ld: %Ld\n", sizeof(num1), sizeof(num2), sizeof(num3)
			);
	return 0;
}
