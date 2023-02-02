#include "main.h"
#include <unistd.h>

/**
 * _putchar - a function that writes a character to the standard output
 * @c: the character to write
 * Return: the character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
