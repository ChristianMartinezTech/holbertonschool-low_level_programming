#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: argumt count
 * @argv: argument vector
 * return: 0 for sucess. 1 for Error
 */

int main(int argc, char *argv[])
{
	int iter;
	int sum = 0;

	if (argc > 1) /*at lest 2 or more arguments, because the first one is always the name of the program*/
		{
			for (iter = 0; iter < argc; iter++)
			{
				if (isdigit(argv[iter]) == 0)
				{
					sum = sum + atoi(argv[iter]);
					printf("%d\n", sum);
					return (0);
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	else
	{
		printf("0\n");
		return (0); /* yet to confirm*/
	}

	return (0);
}
