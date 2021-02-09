#include "holberton.h"
/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int a, b;

	while (b <= 10)
		b++;
	{
		for (a = 97; a <= 122; a++)
			_putchar(a);
		_putchar('\n');
	}
}
