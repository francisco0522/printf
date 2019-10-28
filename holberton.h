#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int _putchar(char c);
int _printf(const char *format, ...);
void (*type(const char *s))(va_list ty);
/**
 * struct cad - Struct
 *
 * @cade: char
 * @f: func
 */
typedef struct ty
{
        char *ty;
        void (*f)(va_list);
} type_t;
void print_char(va_list ty);
void print_string(va_list ty);
void print_int(va_list ty);
#endif /* HOLBERTON_H */
