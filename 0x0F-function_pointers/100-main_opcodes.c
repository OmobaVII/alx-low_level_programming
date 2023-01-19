#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that prints its opcodes
 * @argc: the number of arguments
 * @argv: the argument
 * Return: Success (0)
 */

int main(int argc, char *argv[])
{
	int a = 0;

	while (a < atoi(argv[1]))
	{
		printf("%x\n", a);
		a++;
	}
}
