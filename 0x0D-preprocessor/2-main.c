#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function used to print the name of the file it was compiled from
 * Return: Sucess (0)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}