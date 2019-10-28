#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
 * _printf - produces output according to a format.
 * @form: va_list
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{

	va_list ap;
	int i = 0;

	va_start (ap, format);
	while(*(format + i))
	{
		if (*(format + i) == '%')
		{
			type(format + i + 1)(ap);
		}
		else
		{
			_putchar(*(format + i));
		}
		i++;
	}
	va_end(ap);
	return (0);
}
