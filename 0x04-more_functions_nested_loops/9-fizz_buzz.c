#include <stdio.h>

/**
 * main - for printing fizz buzz in a particular way
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (int num = 1; num <= 100; num++)
	{
		if	((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBuzz");

		else if (num % 3 == 0)
			printf("Fizz");

		else if	(num % 5 == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num = 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
