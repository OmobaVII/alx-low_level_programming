#include <stdio.h>

/**
 * main - to print fib numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int counter;
	int countto = 98;
	int a;
	int b;
	a = 1;
	b = 2;

	for (counter = 1; counter <= (countto / 2); counter++)
	{
		printf("%d %d ", a, b);
		a += b;
		b += a;
	}
	if (countto % 2 == 1)
		printf("%d", a);

	printf("\n");
	return (0);
}
