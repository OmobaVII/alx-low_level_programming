#include "main.h"
#include <stdlib.h>

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

	for (a = 0; s1[a] != '\0'; a++)
	{
		count1++;
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
		count2++;
	}
	newlenght = count1 + count2;

	s = malloc((sizeof(char) * newlenght));
	if (s == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (a < count1)
	{
		s[a] = s1[a];
		a++;
	}
	b = 0;
	for (i = count1; i < newlenght; i++)
	{
		s[i] = s2[b];
		b++;
	}
	return (s);
}
