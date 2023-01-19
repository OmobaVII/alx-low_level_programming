#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * printchar - a function that prints a char
 * @type: the type to print
 * Return: void
 */
void printchar(va_list type)
{
	printf("%c", va_arg(type, int));
}
/**
 * printint - a function that prints an int
 * @type: the type to print
 * Return: void
 */
void printint(va_list type)
{
	printf("%d", va_arg(type, int));
}
/**
 * printfloat - a function that prints a float
 * @type: the type
 * Return: void
 */
void printfloat(va_list type)
{
	printf("%f", va_arg(type, double));
}
/**
 * printstring - a function that prints a string
 * @type: the type
 * Return: void
 */
void printstring(va_list type)
{
	char *string;

	string = va_arg(type, char *);
	if (string == NULL)
	{
		string = "(nil)";
	}
	printf("%s", string);

}

/**
 * print_all - a function that prints anything
 * @format: the arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int a, b;
	char *separator;

	check store[] = {
		{ "c", printchar },
		{ "i", printint },
		{ "f", printfloat },
		{ "s", printstring }
	};

	separator = "";
	a = 0;

	va_start(ap, format);

	while (format != NULL && format[a / 4] != '\0')
	{
		b = a % 4;
		if (store[b].data_type[0] == format[a / 4])
		{
			printf("%s", separator);
			store[b].f(ap);
			separator = ", ";
		}
		a++;
	}
	printf("\n");
	va_end(ap);
}
