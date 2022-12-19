#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: string to copy to
 * @src: string to copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
