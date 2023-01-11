#include "main.h"
#include <stdlib.h>

/**
 * thefree - a function that free 2d array
 * @arr: 2d array
 * @column: number of array columns
 * Return: void
 */

void thefree(char **arr, int column)
{
	if (arr != NULL && column != 0)
	{
		for (; column > 0; column--)
			free(arr[column]);
		free(arr[column]);
		free(arr);
	}
}

/**
 * strtow - a function that splits a string into words
 * @str: the string to be split
 * Return: pointer of an array of words
 */

char **strtow(char *str)
{
	char **words;
	unsigned int a, words_count, s, b, c;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (a = words_count = 0; str[a] != '\0'; a++)
		if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			words_count++;
	words = malloc((words_count + 1) * sizeof(char *));
	if (words == NULL || words_count == 0)
	{
		free(words);
		return (NULL);
	}
	for (b = 0; b < words_count; b++)
	{
		for (a = s = 0; str[c] != '\0'; a++)
		{
			if (str[c] == ' ')
				s++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				words[b] = malloc((c - s + 2) * sizeof(char));
				if (words[b] == NULL)
				{
					thefree(words, b);
					return (NULL);
				}
				break;

			}
		}
		for (c = 0; s <= a; s++, c++)
			words[b][c] = str[s];
		words[b][c] = '\0';
	}
	words[b] = NULL;
	return (words);
}
