#include "3-calc.h"

/**
 * get_op_func - funtion to get the operator
 * @s: operador pasado como argumento al programa
 * Return: the operator of the function
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
	int i;

	i = 0;
	while (ops[i]).op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
}
