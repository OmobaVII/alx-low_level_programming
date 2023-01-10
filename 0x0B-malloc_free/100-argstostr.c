#include "main.h"
#include <stdlib.h>

/**
 * lenghtofstring - used to return the lenght of a string
 * @str: the test string
 * Return: the lenght of the string
 */

int lenghtofstring(char *str)
{
	int count = 0;
	int l;

	for (l = 0; str[l] != '\0'; l++)
		count++;
	return (count);
}

/**
 * argstostr - a function that concetenates all the arguments of the program
 * @ac: the number of arguments
 * @av: the arguments
 * Return: the concetenated arguments
 */

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
