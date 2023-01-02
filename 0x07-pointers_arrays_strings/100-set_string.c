#include "main.h"

/**
 * set_string - a function used to set the value of a pointer to a char
 * @s: pointer to set
 * @to: char that the pointer is set to
 */

void set_string(char **s, char *to)
{
	int a;

	for (a = 0; s[a]; a++)
		*s = to;

}
