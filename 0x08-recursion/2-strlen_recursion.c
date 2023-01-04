#include "main.h"

/**
 * _strlen_recursion - a funtions that returns the lenght of a string
 * @s: the string to be counted
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	int a;
	int count = 0;

	for (a = 0; s[a] != '\0'; a++)

	if (s[a] != '\0')
		count = count + 1;
	else
		return (0);
	return (count);
}
