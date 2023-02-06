#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the name of the file to create
 * @text_content: file content
 * Return: Success (1), Fail (-1)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		if (write(fd, text_content, strlen(text_content)) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
