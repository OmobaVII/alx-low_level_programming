#include "main.h"

/**
 * is_palindrome - a function used to check if a string is a palindrome
 *@s: char array string
 * Return: 1 if palindrome, 0 if not
 */


int is_palindrome(char *s)
{
	int len;

	len = count(s) - 1;
	return (palindrome(s, --len));
}

/**
 * count - a function used to count the to get lenght of char
 * @s: string to get the lenght
 * Return: lenght of string
 */

int count(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (count(++s) + 1);
}

/**
 * palindrome - function used to check for palindrome
 * @s: string to check
 * @l: lenght of string
 * Return: if palindrim 1 else 0.
 */

int palindrome(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (palindrome(++s, l - 2));
	}
	else
		return (0);
}

