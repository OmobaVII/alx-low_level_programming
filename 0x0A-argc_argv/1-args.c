#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints the number of arguments passed into it
 * @argc: The number of arguments passed
 * @argv: string pointing to the argument
 * Return: Success 0.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
