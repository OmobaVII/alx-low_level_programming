#include "main.h"

/**
 * _strlen - used to return the lenght of a string
 * @s: character input
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
	int i = 1, len = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		len++;
		pl = s[i++];
	}
	return (len);
}
