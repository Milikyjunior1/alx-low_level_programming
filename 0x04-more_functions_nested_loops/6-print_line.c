#include "main.h"
/**
 * print_line - function for printing lines
 * @n: character to be printed to
 * Return: Always 0 (success)
 */
void print_line(int n)
{
	int len;

	if (n >  0)
	{
		for (len = 0; len < n; len++)
		{
			_putchar('_');
		}
	}
	putchar('\n');
}
