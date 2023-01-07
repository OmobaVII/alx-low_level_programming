#include <stdio.h>
#include <stdlib.h>

/**
 * main - a fuvtion that multiplies two numbers
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return: success (0)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	return (0);
}

