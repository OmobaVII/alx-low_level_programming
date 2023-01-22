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
	int b;
	int a;
	char *opcode;

	opcode = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (a = 0; a < b; a++)
	{
		if (a == (b - 1))
		{
			printf("%02hhx\n", opcode[a]);
			break;
		}
		printf("%02hhx ", opcode[a]);
	}
	return (0);
}
