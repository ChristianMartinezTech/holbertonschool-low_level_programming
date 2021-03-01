#include "holberton.h"
#include <stdio.h>

/**
 * numbr_arguments - prints the number of arguments
 * @argc: var
 * @argv: var
 * Return: 0
 */

int numbr_arguments(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
	return (0);
}
