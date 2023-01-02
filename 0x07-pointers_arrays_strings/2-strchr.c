#include <stddef.h>
#include "main.h"

/**
 * _strchr - Function used to test for a particular character
 * @s: pointer to be tested
 * @c: character to be tested for in pointer
 * Return: character tested for
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
