#include <stdio.h>

/**
 * main - base sixteen
 * Return: Always 0 (Success)
 */

int main(void)
{
	char number = '0';
	char letter = 'a';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
