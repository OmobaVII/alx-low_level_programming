#include "main.h"

/**
 * _islower - used to check for lower case
 *@c: character used to check
 * Return: 1 if c is lower or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}
