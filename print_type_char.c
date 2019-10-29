#include "holberton.h"
/**
 * print_char - print charcter.
 * @ch: va_list.
 * Return: none.
 */
int print_char(va_list ch)
{
	char c = va_arg(ch, int);

	if (c == '\0')
		return (2);
	write(1, &c, 1);
	return (1);
}
