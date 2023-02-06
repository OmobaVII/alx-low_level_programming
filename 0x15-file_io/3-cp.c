#include "main.h"
#include <stdlib.h>

#define BUFFER 1024
/**
 * main - a program that copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: Success (0)
 */

int main(int argc, char *argv[])
{
	int filedes_from, filedes_to, reading, writing;
	char buf[BUFFER];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	filedes_from = open(argv[1], O_RDONLY);
	filedes_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (filedes_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((reading = read(filedes_from, buf, 1024)) > 0)
	{
		writing = write(filedes_to, buf, reading);
		if (writing != reading)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if ((reading == -1) || (filedes_from == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(filedes_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filedes_from);
		exit(100);
	}
	if (close(filedes_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filedes_to);
		exit(100);
	}
	return (0);
}
