#include "main.h"

/**
 * _memcpy - used to copy memory area.
 * @dest: pointer to be changed
 * @src: exact location to be changed
 * @n: number to times to be changed
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char a;
	int u;

	for (a = 0; a < n; a++)
	{
		dest[a] = (a - 1) + u;
	}
	return (dest[a]);
}
