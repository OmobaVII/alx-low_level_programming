#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: The First string
 * @s2: The second string
 * @n: the number of characters to concatenates in the second string
 * Return: the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a, b, i;
	unsigned int lenghts;

	a = 0;
	b = 0;

	if (n <= strlen(s2))
	{
		lenghts = (strlen(s1) + strlen(s2) - n + 2);
	}
	else
	{
		(lenghts = strlen(s1) + strlen(s2) + 2);
	}

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s = malloc(lenghts);
	if (s == NULL)
		return (NULL);
	while (a < strlen(s1))
	{
		s[a] = s1[a];
		a++;
	}
	for (i = a; i < (lenghts); i++)
	{
		s[i] = s2[b];
		b++;
	}
	s[i] = '\0';
	return (s);
}
