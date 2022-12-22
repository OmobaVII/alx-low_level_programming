#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print a buffer only 10bytes at a time
 * @b: string to print buffer from
 * @size: size of buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i, appex;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x:", i);

		for (appex = 0; appex < 10; appex++)
		{
			if ((appex + i) >= size)
				printf(" ");
			else
				printf("%02x", *(b + appex + i));

			if ((appex % 2) != 0 && appex != 0)
				printf(" ");
		}

		for (appex = 0; appex < 10; appex++)
		{
			if ((appex + i) >= size)
				break;

			else if (*(b + appex + i) >= 31 &&
				*(b + appex + i) <= 126)
				printf("%c", *(b + appex + i));
			else
				printf(".");
		}
		
		if (i >= size)
			continue;


		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
