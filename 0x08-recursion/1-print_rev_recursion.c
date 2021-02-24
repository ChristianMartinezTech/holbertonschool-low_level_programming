#include "holberton.h"

/**
 * _print_rev_recursion - print a string backwards using recusion
 * @s: string "Betty Holberton"
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
