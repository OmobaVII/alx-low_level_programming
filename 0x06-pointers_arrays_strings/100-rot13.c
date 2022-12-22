#include "main.h"

/**
 * rot13 - used to convert to rot13
 * @string: pointer
 * Return: string
 */

char *rot13(char *string)
{
	char *alphabet1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *alphabet2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int n1, n2;

	for (n1 = 0; string[n1] != '\0'; n1++)
	{
		for (n2 = 0; alphabet1[n2] != '\0'; n2++)
		{
			if (string[n1] == alphabet1[n2])
			{
				string[n1] = alphabet2[n2];
				break;
			}
		}
	}
	return (string);
}
