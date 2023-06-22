#include "main.h"
/**
 * print_line - for printing line
 * @n: number of line to be printed
 * Return:Always 0 (success)
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}
	_putchar('\n');
}
