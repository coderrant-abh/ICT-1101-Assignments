// Find the generic root (digital root) of a number using a while loop.
#include <stdio.h>

int main(void)
{
	long long number;

	scanf("%lld", &number);

	if (number < 0)
		number = -number;

	while (number >= 10) {
		long long sum = 0;

		while (number > 0) {
			sum += number % 10;
			number /= 10;
		}

		number = sum;
	}

	printf("%lld\n", number);
	return 0;
}
