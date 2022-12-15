#include "main.h"

/**
 * _isdigit - TO check for digit
 * @c: Character used to test
 * Return: 1 is char is uppercase and 0 if character is lowercase
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
