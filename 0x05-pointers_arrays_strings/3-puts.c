#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 *@str: var
 * Return: (void)
 */

void _puts(char *str)
{
	while (*str)
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
