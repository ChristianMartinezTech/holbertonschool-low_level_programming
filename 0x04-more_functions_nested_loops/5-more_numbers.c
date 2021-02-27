#include "holberton.h"

/**
 * more_numbers - print numbers
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
			_putchar('%d\n', b);
	}
	
}
