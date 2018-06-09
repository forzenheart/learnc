#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, up, setup;

	lower = 0;
	up = 300;
	setup = 20;

	fahr = lower;
	while (fahr <= up) {
		celsius = 5.0 * (fahr - 32.0) / 9.0;
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr += setup;
	}

}
