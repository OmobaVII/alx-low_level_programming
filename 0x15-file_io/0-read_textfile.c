#include "main.h"

/**
 * read_textfile - A function that reads a text file and
 * prints it to the standard output
 * @filename: the name of the file you want to print
 * @letters: the number of letters it should print
 * Return: the total numbers of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char buffer[1024];
	unsigned long int read_characters;
	int line_len, real;

	read_characters = 0;
	real = letters - read_characters;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	while (fgets(buffer, 1024, fp) != NULL && read_characters < letters)
	{
		line_len = strlen(buffer);
		if (line_len <= real)
		{
			if (printf("%s", buffer) < line_len)
			{
				fclose(fp);
				return (0);
			}
			read_characters = read_characters + line_len;
		}
		else
		{
			if (printf("%.*s\n", (real), buffer) < (real))
			{
				fclose(fp);
				return (0);
			}
			read_characters = letters;
		}
	}
	if (fclose(fp) != 0)
	{
		return (0);
	}
	return (read_characters);
}
