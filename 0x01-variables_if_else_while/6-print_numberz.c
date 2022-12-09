#include <stdio.h>

/**
 * main - numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
