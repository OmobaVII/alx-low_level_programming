#include "main.h"

/**
 * print_chessboard - a function used to print a chessboard
 * @a: indicating the row and column of the chessboard
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int column;
	int row;

	for (column = 0; column < 8; column++)
	{
		for (row = 0; row < 8; row++)
		{
			if (row == 7)
			{
				_putchar(a[column][row]);
				_putchar('\n');
			}
			else
				_putchar(a[column][row]);
		}
	}
}
