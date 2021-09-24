#include "holberton.h"
/**
 * _abs - compute the absolute value of an integer
 * @n: number to be compute
 * Return: n for positive and -n por negative
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (-n);
}
