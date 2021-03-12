#include "variadic_functions.h"

/**
 * print_numbers - sum function.
 * @n: number.
 * @separator: var.
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list cons;
	unsigned int a;

	va_start(cons, n);
	for (a = 0; a < n; a++)
	{
		if (separator != NULL)
		{
			printf("%i", va_arg(cons, unsigned int));
			if (a < n - 1)
				printf("%s", separator);
		}
		else
		{
			printf("%i", va_arg(cons, unsigned int));
		}
	}
	printf("\n");
	va_end(cons);
}
