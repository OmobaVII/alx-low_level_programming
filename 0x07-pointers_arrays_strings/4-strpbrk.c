#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - a function that searches for a string of a set of bytes
 * @s: string to be searched
 * @accept: the string of bytes to search for
 * Return: a pointer to the byte in string s that matches that of accept
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return (NULL);
}

