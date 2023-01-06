#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that multiplies 2 numbers
 * @argc: number of arguments
 * @argv: second test number
 * Return: Success(0)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
