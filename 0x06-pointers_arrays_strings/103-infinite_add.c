#include "main.h"

/**
 * infinite_add - adds two integers stored as strings
 *
 * @n1: number 1 integer to add
 * @n2: number 2 integer to add
 * @r: array to store sum
 * @size_r: size of r
 * Return: Always 0(Success)
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int remain = 0, appex = 0, appex2;
	char *s1 = n1, *s2 = n2;

	while (*s1 != 0)
		s1++;
	while (*s2 != 0)
		s2++;
	size_r--;
	r[size_r] = 0;
	s1--;
	s2--;
	while (s2 != n2 - 1 && s1 != n1 - 1)
	{
		r[appex] = *s2 - '0' + *s1 + remain;
		remain = 0;
		if (r[appex] > '9')
		{
			remain++;
			r[appex] -= 10;
		}
		appex++;
		s2--;
		s1--;
		if (size_r == appex && (s1 != n1 - 1 || s2 != n2 - 1 || remain == 1))
			return (0);
	}
	while (s1 != n1 - 1)
	{
		r[appex] = *s1 + remain;
		remain = 0;
		if (r[appex] > '9')
		{
			remain = 1;
			r[appex] -= 10;
		}
		s1--;
		appex++;
		if (size_r == appex && (s1 != n1 - 1 || remain == 1))
			return (0);
	}
	while (s2 != n2 - 1)
	{
		r[appex] = *s2 + remain;
		remain = 0;
		if (r[appex] > '9')
		{
			remain = 1;
			r[appex] -= 10;
		}
		s2--;
		appex++;
		if (size_r == appex && (s2 != n2 - 1 || remain == 1))
			return (0);
	}
	if (remain == 1)
	{
		r[appex] = '1';
		r[appex + 1] = 0;
	}
	else
	{
		r[appex--] = 0;
	}
	appex2 = 0;
	while (appex2 <= appex)
	{
		remain = r[appex];
		r[appex] = r[appex2];
		r[appex2] = remain;
		appex--;
		appex2++;
	}
	return (r);
}
