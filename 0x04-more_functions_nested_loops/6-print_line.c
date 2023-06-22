#include "main.h"
/**
 * print_line - function for printing lines
 * @n: character to be printed to
 * Return: Always 0 (success)
 */
void print_line(int n)
{
	int t;

	for (t = '_'; t <= n; t++)
		_putchar(t);
	putchar('\n');
}
