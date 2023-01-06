#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that prints the minimum amount of coins for change
 * @argc: count arguments which must be 2
 * @argv: string of the program name and the coins
 * Return: the least number of coins
 */

int main(int argc, char *argv[])
{
	int a;
	int change;

	change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}

	a = atoi(argv[1]);

	change = change + a / 25;
	a = a % 25;
	change = change + a / 10;
	a = a % 10;
	change = change + a / 5;
	a = a % 5;
	change = change + a / 2;
	a = a % 2;
	change = change + a / 1;

	printf("%d\n", change);
	return (0);
}
