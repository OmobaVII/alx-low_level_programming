#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_num - used to identify is the pointer is all numbers
 * @p: point to a value
 * Return: Sucess (1)
 */

bool is_num(char *p)
{
	int b = 0;

	for (b = 0; p[b]; b++)
	{
		if (!(p[b] >= '0' && p[b] <= '9'))
			return (0);
	}
	return (1);
}


/**
 * main - a function that multiplies 2 numbers
 * @argc: number of arguments
 * @argv: second test number
 * Return: Success(0)
 */

int main(int argc, char *argv[])
{
	int a = 1;
	int answer = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (a < argc)
	{

		if (is_num(argv[a]))
			answer = answer + atoi(argv[a]);
		else
		{
			printf("Error\n");
			return (1);
		}
		a++;
	}

	printf("%d\n", answer);

	return (0);
}
