#include "holberton.h"

/**
 * swap_int - funtion to reset the variable value to 98
 * @a: variable
 * @b: variable
 * Return: (void)
 */

void swap_int(int *a, int *b)
{
	int z;

	z = *b;
	*b = *a;
	*a = z;
}
