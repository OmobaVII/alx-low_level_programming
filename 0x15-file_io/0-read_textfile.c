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
	int file_des;
	ssize_t read_c, wrote_c;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf ==  NULL)
	{
		return (0);
	}
	read_c = read(file_des, buf, letters);
	if (read_c == -1)
	{
		free(buf);
		close(file_des);
		return (0);
	}
	wrote_c = write(STDOUT_FILENO, buf, read_c);
	if (wrote_c == -1)
	{
		free(buf);
		close(file_des);
		return (0);
	}
	close(file_des);
	return (read_c);
}
