#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int _putchar(char c);
int _printf(const char *format, ...);
int (*type(const char *s))(va_list ty);
/**
 * struct ty - Struct
 *
 * @ty: char
 * @f: func
 */
typedef struct ty
{
	char *ty;
	int (*f)(va_list);
} type_t;
int print_char(va_list ty);
int print_string(va_list ty);
int print_int(va_list ty);
#endif /* HOLBERTON_H */
