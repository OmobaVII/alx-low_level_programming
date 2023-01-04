#include "main.h"

/**
 * wildcmp - a function that compared two strings
 * @s1: string 1.
 * @s2: string 2.
 * Return: 1 if identical else 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (1);
	else
		return (0);
}
