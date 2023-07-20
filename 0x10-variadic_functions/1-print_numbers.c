#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - for printing numbers
 * @separator: for separating
 * @n: number to be printed
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int s;

	va_start(a, n);

	for (s = 0; s < n; s++)
	{
		printf("%d", va_arg(a, int));
		if (separator != 0 &&  s < n - 1)
			printf("%s", separator);
	}
	va_end(a);
	printf("\n");
}
