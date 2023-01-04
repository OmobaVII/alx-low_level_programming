#include "main.h"

/**
 * _strlen_recursion - a funtions that returns the lenght of a string
 * @s: the string to be counted
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (0);
	}
	{
		count = (1 + _strlen_recursion(s + 1));
	}
	return (count);
}
