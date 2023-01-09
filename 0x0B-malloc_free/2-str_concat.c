#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings into a new string
 * @s1: string 1.
 * @s2: string 2.
 * Return: the newly allocated string
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int a, b, i;
	int count1;
	int count2;
	int newlenght;

	a = 0;
	b = 0;
	count1 = 0;
	count2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
	{
		count1++;
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
		count2++;
	}
	newlenght = count1 + count2;
	s = malloc((sizeof(char) * (newlenght + 1)));
	if (s == NULL)
		return (NULL);
	a = 0;
	while (a < count1)
	{
		s[a] = s1[a];
		a++;
	}
	b = 0;
	for (i = a; i < newlenght; i++)
	{
		s[i] = s2[b];
		b++;
	}
	return (s);
}
