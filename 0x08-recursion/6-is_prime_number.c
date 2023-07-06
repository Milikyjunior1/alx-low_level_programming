#include "main.h"
/**
 * is_prime_number - for finding prime number
 * @n: number 5o check
 * Return: Always 0
 */
int is_prime_number(int n)
{
	int r;

	for (r = (n / 2); r > 1; r--)
	{
		if ((n % r) == 0)
			return (0);
		else
			return (1);
	}
	return (0);
}
