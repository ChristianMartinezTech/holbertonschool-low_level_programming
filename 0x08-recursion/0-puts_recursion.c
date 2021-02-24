#include "holberton.h"

/**
 * _puts_recursion - print a string using recusion
 * @s: string "Betty Holberton"
 * Return: 0 (Since its a void funtion)
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
	return;
}
