#include "holberton.h"
/**
 * print_int - print a integer.
 * @ch: va_list.
 * Return: bytes of integer.
 */
int print_int(va_list ch)
{
	int val = va_arg(ch, int);
	unsigned int a, n, i, j, d;
	char *b;

	a = val;
	n = 0;
	j = 1;
	if (val < 0)
	{
		n = 1;
		a = a * -1;
	}
	i = 1;
	if (a > 9)
	{
		while ((val / 10) != 0)
		{
			val = val / 10;
			i++;
		}
	}
	if (n == 1)
		b = malloc((sizeof(char) * i) + 1);
	else
		b = malloc(sizeof(char) * i);
	if (b == NULL)
		return (0);
	while (j <= i)
	{
		b[i - j + n] = ((a % 10) + 48);
		a = a / 10;
		j++;
	}
	if (n == 1)
		b[0] = '-';
	d = (write(1, b, i + n));
	free(b);
	return (d);
}
