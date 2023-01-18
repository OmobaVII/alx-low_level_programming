#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - a function that calculates mathematical expression of arguments
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: Sucess (0)
 */

int main(int argc, char *argv[])
{
	int (*a)(int, int);
	int i, j;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	a = get_op_func(argv[2]);
	if (a == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	printf("%d\n", a(i, j));

	return (0);
}
