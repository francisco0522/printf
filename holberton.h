#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
int _putchar(char c);
int _printf(const char *format, ...);
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
void print_char(va_list ap);
void print_string(va_list ap);
#endif /* HOLBERTON_H */
