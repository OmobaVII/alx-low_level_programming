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

		for (tens = '0'; tens <= '9'; tens++) /*print for tens*/
		{
			for (ones = (tens + 1); ones <= '9'; ones++) /*print for ones*/
			{
				for (hundreds = (ones + 1); hundreds <= '9'; hundreds++)
				{
				putchar(tens);
				putchar(ones);
				putchar(hundreds);
					if (tens != '9' || ones != '9' || hundreds != '9')
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
