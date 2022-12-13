#include "main.h"

/**
 * lowercase_alphabet - print lower case alphabets
 * 
 * Return: Always 0 (Success)
 */
void lowercase_alphabet(void)
{
	char letter;
	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
