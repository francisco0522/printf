#include "holberton.h"
/**
 * type - operation function
 * @s: operator
 * Return: pointer.
 */
void (*type(const char *s))(va_list ty)
{
	type_t types[] = {
		{"c", print_char},
		{"s", print_string},
//		{"i", print_int},
//		{"d", print_decimal},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (types[i].ty)
	{
		if (*s == *(types[i].ty))
		{
			return types[i].f;
		}
		i++;
	}
	write(2, "Not found", 9);
	exit(1);
}
