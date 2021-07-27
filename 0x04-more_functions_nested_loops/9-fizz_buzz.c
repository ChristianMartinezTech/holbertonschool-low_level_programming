#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100 and replace multiples
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 1; num < 100; num++)
	{
		if ((num % 15) == 0)
		{
			printf("FizzBuzz ");
		}

		else if ((num % 5) == 0)
		{
			printf("Buzz ");
		}

		else if ((num % 3) == 0)
		{
			printf("Fizz ");
		}

		else
		{
			printf("%d ", num);
		}
	}
	printf("Buzz\n");

	return (0);
}
