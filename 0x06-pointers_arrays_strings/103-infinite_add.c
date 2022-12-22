/**
 * infinite_add - adds two integers stored as strings
 * @n1: number 1 integer to add
 * @n2: number 2 integer to add
 * @r: array to store sum
 * @size_r: size of r
 *
 * Return: Always 0(Success)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int p1, p2, tmpl, rl, n, sum, number1, number2, remain;
	char tmp[1000];

	rl = n = p1 = p2 = sum = number1 = number2 = remain = 0;
	while (n1[p1] != '\0')
		p1++;
	while (n2[p2] != '\0')
		p2++;
	if (p1 + 2 > size_r || p2 + 2 > size_r)
		return (0);
	p1--;
	p2--;
	while (n <= p1 || n <= p2)
	{
		number1 = number2 = 0;
		if (n <= p1)
			number1 = n1[p1 - n] - '0';
		if (n <= p2 && (p2 - n) >= 0)
			number2 = n2[p2 - n] - '0';
		sum = number1 + number2 + remain;
		if (sum >= 10)
		{
			remain = 1;
			sum -= 10;
		}
		else
			remain = 0;
		r[n] = sum + '0';
		n++;
		rl++;
	}
	if (remain > 0)
	{
		r[n] = remain + '0';
		r[n + 1] = '\0';
	}
	n = tmpl = 0;
	while (n <= rl)
	{
		tmp[n] = r[rl - n];
		tmpl++;
		n++;
	}
	n = 0;
	while (n < tmpl)
	{
		if (r[n] == '\0')
		{
			break;
		}
		r[n] = tmp[n];
		n++;
	}
	return (r);
}
