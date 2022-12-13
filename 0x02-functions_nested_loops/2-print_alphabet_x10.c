#include "main.h"

/**
*print_alphabet_x10 - prints alphabet 10x
*Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char letter;
	int multiple;

	for (multiple = 1; multiple <= 10; multiple++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
