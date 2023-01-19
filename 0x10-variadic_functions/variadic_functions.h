#ifndef __VARIADIC_FUNCTIONS_H__
#define __VARIADIC_FUNCTIONS_H__
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void printchar(va_list type);
void printint(va_list type);
void printfloat(va_list type);
void printstring(va_list type);

typedef struct check
{
	char *data_type;
	void (*f)();
}check;

#endif
