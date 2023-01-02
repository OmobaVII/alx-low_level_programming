#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int count = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] != 32)
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[a] == accept[b])
				count++;
			}
		}
		else
			return (count);
	}
		return (count);
}
