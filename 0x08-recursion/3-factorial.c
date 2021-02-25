#include "holberton.h"

/**
 * factorial - print the factorial of n
 * @n: Variable
 * Return: 0 or 1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
