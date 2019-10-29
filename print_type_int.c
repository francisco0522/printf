#include"holberton.h"
/**
 * print_int - print int
 * @in: va_list.
 * Return: none
 */
void print_int(va_list in)
{
	write(1, va_arg(in, int), 1);
}
