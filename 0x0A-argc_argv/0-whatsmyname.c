#include "holberton.h"

/**
 * function_name - prints the name of the program
 * @argc: var
 * @argv: var
 * Return: 0
 */

int function_name(int argc, char *argv[])
{
	if (argc >= 1)
	{
		_putchar("%s/n", *argv[0]);
	}
}
