#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns to a newly allocated space in memory,
 * which contains a copy of a string given
 * @str: string to copy
 * Return: the new string which we copied
 */

char *_strdup(char *str)
{
	char *s;
	int a, count;

	a = 0;
	count = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
	{
		count++;
	}
	s = malloc(sizeof(char) * count + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (a < count)
	{
		s[a] = str[a];
		a++;
	}
	return (s);
}
