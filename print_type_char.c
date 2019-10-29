#include "holberton.h"
/**
 * print_char - print charcter.
 * @ch: va_list.
 * Return: none.
 */
int print_char(va_list ch)
{
	unsigned char c = va_arg(ch, int);

	write(1, &c, 1);
	return (1);
}
