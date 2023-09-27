#include "main.h"
/**
 * get_bit - for getting the bit at a given index
 * @n: the bit
 * @index:
 * the bit index
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int *conv, **arr, ind;

	while (n && index)
	{
		*conv = 0;
		while ((n % 2) > 0)
		{
			*conv = (*conv * 10) + (n % 2);
			arr = &conv;
			for (ind = 0; ind <= index; ind++)
			{
			}
		}
	}
	if (*arr[ind] == 1)
	{
		return (1);
	}
	else if (*arr[ind] == 0)
		return (0);
	else
		return (-1);
}
