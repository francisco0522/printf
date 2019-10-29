#include "holberton.h"
/**
 * print_char - print charcter.
 * @ch: va_list.
 * Return: none.
 */
void print_char(va_list ch)
{
	char c = va_arg(ch, int);

	if (c == '\0')
		exit(1);
	write(1, c, 1);
}
