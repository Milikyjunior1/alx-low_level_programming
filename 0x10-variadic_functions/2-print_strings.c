#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - for printing string
 * @separator: for separati g string
 * @n: number of string or index
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int s;
	char *ch;

	va_start(a, n);
	for (s = 0; s < n; s++)
	{
		ch = va_arg(a, char*);
		if (ch == NULL)
			printf("(nil)");
		else
			printf("%s", ch);
		if (separator != 0 && s < n - 1)
			printf("%s", separator);
	}
	va_end(a);
	printf("\n");
}
