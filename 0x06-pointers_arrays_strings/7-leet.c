#include "main.h"

/**
 * leet - used to change specific aplphabets to numbers
 * @string: pointer
 * Return: Always 0 (Success)
 */

char *leet(char *string)
{
	int n1, n2;
	char *alphabet = "aeotlAEOTL";
	char *number = "4307143071";

	for (n1 = 0; string[n1] != '\0'; n1++)
	{
		for (n2 = 0; alphabet[n2] != '\0'; n2++)
		{
			if (string[n1] == alphabet[n2])
				string[n1] = number[n2];
		}
	}
	return (string);
}
