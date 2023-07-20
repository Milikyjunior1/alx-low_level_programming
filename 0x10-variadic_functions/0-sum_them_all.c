#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - for summing numbers with stdarg
 * @n: for getting the numbers
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	int sum = 0;
	unsigned int i;


	if (n == 0)
		return (0);

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(a, int);
	}
	va_end(a);
	return (sum);
}
