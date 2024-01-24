#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - determine which op_function to perform
 * @s: argument
 * Return: function pointer to op_function
 */

int(*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
