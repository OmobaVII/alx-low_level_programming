#include "main.h"

/**
 * _isalpha - used to check for lower case
 *@c: character used to check
 * Return: 1 if c is lower or 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'a') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}
