#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - a function that selects the correct
 * function to perform the operation
 * @s: the operand to look out for
 * Return: the function used
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

