#include "main.h"

/**
 * print_rev - prints the reverse of a string
 * count: used to count from frist to end, counter: used to count from back
 * @s: str input
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int count = 0;
	int i, counter;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	for (counter = (count - 1); counter >= 0; counter--)
	{
		_putchar(s[counter]);
	}
	_putchar('\n');
}
