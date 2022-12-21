#include "main.h"

/**
 * *_strncat - used to cencetenate two strings but to use at most n bytes
 * @dest: pointer
 * @src: second pointer
 * @n: number of bytes to use from src
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	;
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	return (dest);
}
