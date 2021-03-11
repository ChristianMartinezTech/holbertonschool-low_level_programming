#include "variadic_functions.h"

/**
 * sum_them_all - sum function.
 * @n: number.
 * Return: may be 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list cons;
	unsigned int sum, add, a;

	if (n == 0)
	{
		return (0);
	}

	va_start(cons, n);
	sum = 0;
	for (a = 0; a < n; a++)
	{
		add = va_arg(cons, unsigned int);
		sum += add;
	}
	va_end(cons);
	return (sum);
}
