#include "holberton.h"

/**
 * puts_half - check the code for Holberton School students.
 * @str: var
 * Return: void
 */

void puts_half(char *str)
{
	int i, t, n;

	for (t = 0; str[t] != '\0'; t++)
	{
	}

if ((t % 2) == 0)
{
	n = (t / 2);

	for (i = n; i < t; i++)
	{
		_putchar(str[i]);
	}
}
else
{
	n = (t - 1) / 2;

	for (i = (n + 1); i < t; i++)
	{
		_putchar(str[i]);
	}

}
_putchar('\n');
}
