#include "main.h"
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_num - a function used to check if it is a number
 * @p: the character to test for a number
 * Return: Success (0)
 */

bool is_num(char *p)
{
	int b = 0;

	for (b = 0; p[b]; b++)
	{
		if (!(p[b] >= '0' && p[b] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * _printerror - a function used to print a string
 * @s1: the string to be printed
 * Return: void
 */

void _printerror(char *s1)
{
	int a;

	for (a = 0; s1[a] != '\0'; a++)
	{
		_putchar(s1[a]);
	}
	_putchar('\n');
}

/**
 *print_number - used to print an integer
 *@n: used as test integer
 *Return: void
 */

void print_number(int n)
{
	unsigned int a, b, counter, temp, place;

	a = n;
	place = b = 1;
	temp = a;

	while (temp > 9)
	{
		b++;
		temp = temp / 10;
	}
	for (counter = 1; counter < b; counter++)
		place = place * 10;
	while (place > 1)
	{
		_putchar((a / place) % 10 + '0');
		place = place / 10;
	}
		_putchar(a % 10 + '0');
}

/**
 * main - a function used to multiply arguments
 * @argc: the number of arguments
 * @argv: the string of argument
 * Return: Success (0)
 */

int main(int argc, char *argv[])
{
	int c, a, mul;

	c = 0;
	a = 1;
	mul = 0;

	if (argc != 3)
	{
		_printerror("Error");
		exit(98);
	}
	while (c < argc)
	{
		if (is_num(argv[a]))
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
			print_number(mul);
			_putchar('\n');
			return (0);
		}
		else
		{
			_printerror("Error");
			exit(98);
		}
		return (0);
	}
	return (0);
}

