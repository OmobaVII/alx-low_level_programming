#include "main.h"

/**
 * string_toupper - used to change all lowercase letters of a string to upper
 * @string: the pointer of the string
 * Return: Always 0 (Success)
 */

char *string_toupper(char *string)
{
	int a;

	for (a = 0; string[a] != '\0'; a++)
	{
		if (string[a] >= 'a' && string[a] <= 'z')
		{
			string[a] = string[a] - 32;
		}
	}
	return (string);
}
