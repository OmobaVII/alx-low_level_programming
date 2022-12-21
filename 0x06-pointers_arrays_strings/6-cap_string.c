#include "main.h"

/**
 * cap_string - used to capitalize all the words of a string
 * @string: pointer of a string
 * Return: Always 0 (success)
 */

char *cap_string(char *string)
{
	int a;

	for (a = 0; string[a] != '\0'; a++)
	{
		if (string[a] == ' ' || string[a] == '\t' || string[a] == '\n'
			|| string[a] == '.' || string[a] == ',' || string[a] == '!'
			|| string[a] == '?' || string[a] == '"' || string[a] == '('
			|| string[a] == ')' || string[a] == '{' || string[a] == '}')
		{
			a++;
			if (string[a] >= 'A' && string[a] <= 'Z')
				a++;
			else if (string[a] >= 'a' && string[a] <= 'z')
				string[a] = string[a] - 32;
			a--;
		}
		else if (string[0] >= 'a' && string[0] <= 'z')
			string[0] = string[0] - 32;
	}
	return (string);
}
