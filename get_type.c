/**
 * get_op_func - operation function
 * @s: operator
 * Return: pointer.
 */
int (*get_op_func(char *s))(int, int)
{
	type_t types[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_decimal},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (types[i].ty != NULL)
	{
		if (strcmp(s, types[i].ty) == 0)
		{
			break;
		}
		i++;
	}
	return (types[i].f);
}
