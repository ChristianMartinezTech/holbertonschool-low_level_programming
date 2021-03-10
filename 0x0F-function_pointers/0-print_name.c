#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - funtion to print a name
 * @name: name
 * @f: f pointer
 * Return: NULL
 */

void print_name(char *name, void (*f)(char *))
{
	if ((f != NULL) && (name != NULL))
	{
		f(name);
	}
}
