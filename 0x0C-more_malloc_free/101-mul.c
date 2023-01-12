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
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}

/**
 * main - a function used to multiply arguments
 * @argc: the number of arguments
 * @argv: the string of argument
 * Return: Success (0)
 */

int main(int argc, char *argv[])
{
	int a, mul;

	a = 1;

	if (argc != 3)
	{
		_printerror("Error");
		exit(98);
	}
	while (a < argc)
	{
		if (is_num(argv[a]))
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
			print_number(mul);
			_putchar('\n');
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
