#include "holberton.h"
/**
  *
  *
  *
  */
void print_char(va_list ch)
{
	char c = va_arg(ch, int);
	if(c == '\0') 
		exit (1);
	_putchar(c);
}
