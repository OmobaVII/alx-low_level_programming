#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function used to print the sums of
 * the two diagonals of a square matrix
 * @a: the array used as test
 * @size: the size of the array
 */

void print_diagsums(int *a, int size)
{
	int row = 0;
	int column = size - 1;
	int first_result = 0;
	int second_result = 0;

	while (row <= (size * size))
	{
		first_result += a[row];
		row = row + size + 1;
	}
	while (column < (size * size - 1))
	{
		second_result += a[column];
		column = column + size - 1;
	}
	printf("%d, %d\n", first_result, second_result);
}
