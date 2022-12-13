#include <stdio.h>

/**
 * main - to print fib numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sum_of_evens = 0;
	int sum = 1;
	int a;
	int b;

	a = 1;
	b = 1;

	while (b < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
			sum_of_evens += sum;
	}
	printf("%d\n", sum_of_evens);

	return (0);
	}
