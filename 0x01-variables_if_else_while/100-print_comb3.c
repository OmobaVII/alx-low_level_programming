#include <stdio.h>

/**
 *main - print 0-9 separated with commas, using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
		int tens;
		int ones;

		for (tens = '0'; tens <= '9'; tens++) /*print for tens*/
		{
			for (ones = (tens + 1); ones <= '9'; ones++) /*print for ones*/
			{
				putchar(tens);
				putchar(ones);
				if (tens != '8' || ones != '9')/*for skiping comma at the end*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');

		return (0);
}
