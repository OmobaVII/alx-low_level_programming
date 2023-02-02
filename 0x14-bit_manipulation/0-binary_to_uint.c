#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: the binary number
 * Return: the unsigned int converted from binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int answer, base, len;

	answer = 0;
	base = 1;

	if (!b)
	{
		return (0);
	}
	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--; len + 1 > 0; len--)
	{
		if (b[len] == '0' || b[len] == '1')
		{
			answer += (b[len] - '0') * base;
			base = base * 2;
		}
		else
		{
			return (0);
		}
	}
	return (answer);
}
