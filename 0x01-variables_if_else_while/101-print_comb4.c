#include <stdio.h>

/**
 *main - print 0-9 separated with commas, using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
		int one;
		int ten;
		int hundred;

		for (hundred = '0'; hundred <= '9'; hundred++) /*print for tens*/
		{
			for (ten = (hundred + 1); ten <= '9'; ten++) /*print for ones*/
			{
				for (one = (ten + 1); one <= '9'; one++)
				{
				putchar(hundred);
				putchar(ten);
				putchar(one);
					if (hundred != '7' || ten != '8' || one != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		putchar('\n');

		return (0);
}
