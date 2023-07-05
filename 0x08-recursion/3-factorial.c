#include "main.h"
/**
 * factorial - for finding factorial of num
 * @n: number f8nded
 * Return: Always 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n));
}
