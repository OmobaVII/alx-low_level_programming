#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the text to append
 * Return: Success (1) an Failure (-1)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = fopen(filename, "a");
	if (fp == NULL)
	{
		return (-1);
	}
	if (fprintf(fp, "%s", text_content) < 0)
	{
		fclose(fp);
		return (-1);
	}

	fclose(fp);
	return (1);
}
