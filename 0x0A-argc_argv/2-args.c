#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that print all arguments 1 per line.
 * @argc: number of arguments
 * @argv: pointer to the arguments
 * Return: Success (0)
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	printf("%s\n", argv[a]);
	return (0);
}
