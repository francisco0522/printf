#include "holberton.h"
/**
 * print_string - prints string.
 * @ty: va_list
 * Return: Always 0.
 */
int print_string(va_list ty)
{
	int i = 0;

	char *cad = (va_arg(ty, char*));

	if (cad == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*(cad + i))
	{
		write(1, (cad + i), 1);
		i++;
	}
	return (i);
}
