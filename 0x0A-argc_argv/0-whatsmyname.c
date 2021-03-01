#include "holberton.h"
#include <stdio.h>

/**
 * function_name - prints the name of the program
 * @argc: var
 * @argv: var
 * Return: 0
 */

int function_name(int argc __attribute__((unused)), char *argv[])
{
		printf("%s\n", argv[0]);
		return (0);
}
