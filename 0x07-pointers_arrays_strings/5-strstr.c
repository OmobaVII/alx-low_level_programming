#include "main.h"
#include <stdlib.h>

/**
 * _strstr - function used to locate a substring
 * @haystack: the superstring to be searched
 * @needle: the substring to be searched for
 * Return: a pointer to the beginning of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	b = 0;

	while (needle[b] != '\0')
		b++;

	while (*haystack)
	{

		for (a = 0; needle[a]; a++)
		{
			if (haystack[a] != needle[a])
				break;
		}
		if (a != b)
			haystack++;
		else
			return (haystack);

	}
	return (NULL);
}
