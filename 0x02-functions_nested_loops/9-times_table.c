#include "main.h"

/**
 * times_table - form multiplication table
 */

void times_table(void)
{
	int row;
	int column;
	int answer;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			answer = (row * column);

			if (column == 0)
			{
				_putchar('0' + answer);
			}
			else if (answer <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + answer);
			}
			else if (answer > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (answer / 10));
				_putchar('0' + (answer % 10));
			}
		}
		_putchar('\n');
	}
}

