#include "holberton.h"
/**
 * print_string - prints string.
 * @ty: va_list
 * Return: Always 0.
 */
void print_string(va_list ty)
{
	int i = 0;

	char *cad = (va_arg(ty, char*));
	if (cad == NULL)
	{
	return;
	}
	while(*(cad + i))
	{
	_putchar(*(cad + i));
	}
}
