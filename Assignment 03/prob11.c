// Find the generic root (digital root) of a number using a while loop.
#include <stdio.h>

int main(void)
{
	long long n, sum;

	printf("\nEnter a number: ");
	scanf("%lld", &n);

	if (n < 0)
		n = -n;

	while (n >= 10) {
		sum = 0;

		while (n > 0) {
			sum = sum + n % 10;
			n = n / 10;
		}

		n = sum;
	}

	printf("\nDigital Root = %lld\n\n", n);
	
	return 0;
}

