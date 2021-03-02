#include "holberton.h"
#include <stdio.h>

/**
 * main - program that counts all arguments it recieves
 * @argc: var
 * @argv: var
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
