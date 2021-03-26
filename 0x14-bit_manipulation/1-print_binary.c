#include "holberton.h"

/**
 * print_binary - check the code for Holberton School students.
 * @n: number given into the funct. 
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	int counter, num;

for (counter = 31; counter >= 0; counter--)
{
	num = n >> counter;

	if (num & 1)
	{
		_putchar('1');
	}
	else if (num != 0)
	{
		_putchar('0');
	}
}
}