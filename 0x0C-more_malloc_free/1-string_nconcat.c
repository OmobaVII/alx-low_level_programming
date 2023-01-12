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
	int a, i, l1, l2;
	int num = n;

	a = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	if (num >= l2)
	{
		num = l2;
		s = malloc(sizeof(char) * (l1 +  l2 + 1));
	}
	else
	{
		s = malloc(sizeof(char) * (l1 + n + 1));
	}
	if (s == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < l1; a++)
	{
		s[a] = s1[a];
	}
	for (i = 0; i < num; i++)
	{
		s[a++] = s2[i];
	}
	s[a++] = '\0';
	return (s);
}
