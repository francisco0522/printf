#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
 * _printf - produces output according to a format.
 * @format: va_list
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{

	va_list ap;
	int i = 0;

	va_start(ap, format);
	if (format == NULL)
	{
	return (-1);
	}
	while (*(format + i))
	{
		if (*(format + i) == '%')
		{
			if (*(format + i + 1) == '\0')
			return (-1);
			else if (*(format + i + 1) == '%')
			{
			write(1, (format + i), 1);
			i++;
			}
			else if (*(format + i + 1) != 'c' && *(format + i + 1) != 's')
                        write(1, (format + i), 1);
			else
			{
			type(format + i + 1)(ap);
			i++;
			}
		}
		else
		{
			write(1, (format + i), 1);
		}
		i++;
	}
	va_end(ap);
	return (0);
}
