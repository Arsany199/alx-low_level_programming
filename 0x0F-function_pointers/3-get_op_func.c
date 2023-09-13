#include "calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - choose the function to work with it
 * @s: the operator passed as argument to the program
 *
 * Return: pointer to the chosen function
 * or NULL
 */
int (*get_op_func(char *s))(int, int)
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

	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
