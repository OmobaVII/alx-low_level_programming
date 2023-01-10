#include "main.h"
#include <stdlib.h>

int lenghtofstring(char *str)
{
	int count = 0;
	int l;

	for (l = 0; str[l] != '\0'; l++)
		count++;
	return (count);
}

char *argstostr(int ac, char **av)
{
	char *str;
	int lenght = 0;
	int a = 0;
	int b = 0;
	int c = 0;

	if (ac == 0 || av == 0)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		lenght = lenght + lenghtofstring(av[a]);
	}
	lenght = lenght + ac + 1;

	str = malloc(sizeof(char) * lenght);

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; b < lenghtofstring(av[a]); b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c++] = '\n';
	}
	return (str);
}
