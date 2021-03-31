/**
 * get_bit - prototype
 * @n: var
 * @index: var
 * Return: int to the main function.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num = 1;

	if (num & n)
	{
		return (1);
	}

	if (sizeof(n) * 8 < index)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
