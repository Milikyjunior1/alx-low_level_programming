#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The argument to be evaluated
 *
 * Return: abs_val
 */
int _abs(int n)
{
	int ceil;

	if (n < 0)
		ceil = -1 * n;
	else
		ceil = n;
	return (ceil);
}
