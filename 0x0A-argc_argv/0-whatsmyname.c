#include "holberton.h"
#include <stdio.h>

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
		printf("%c\n", *argv[0]);
		return (0);
	}
	else
	{
		return (1);
	}
}
