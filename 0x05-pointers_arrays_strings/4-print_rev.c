#include "holberton.h"

/**
 * print_rev - funtion
 * @s: var
 * Return: void
 */

void print_rev(char *s)
{
	for (s = *str; s < '\0'; s++)
	{
		_putchar(*s);
	}
}
