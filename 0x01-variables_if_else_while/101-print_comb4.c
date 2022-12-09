#include <stdio.h>

/**
 *main - print 0-9 separated with commas, using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
		int tens;
		int ones;
		int hundreds;

		for (hundreds = '0'; tens <= '9'; hundreds++) /*print for tens*/
		{
			for (tens = (hundreds + 1); tens <= '9'; tens++) /*print for ones*/
			{
				for (ones = (tens + 1); ones <= '9'; ones++)
				{
				putchar(hundreds);
				putchar(tens);
				putchar(ones);
					if (hundreds != '7' || tens != '8' || ones != '9')
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
