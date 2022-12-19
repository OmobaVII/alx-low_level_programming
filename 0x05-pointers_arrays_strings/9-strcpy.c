#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: string to copy to
 * @src: string to copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
