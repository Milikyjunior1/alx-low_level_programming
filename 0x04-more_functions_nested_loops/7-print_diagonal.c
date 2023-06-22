#include "main.h"
/**
 * print_diagonal - for printi g diagonal
 * @n: number of diagonal to be printed
 * Return:Always 0 (success)
 */
void print_diagonal(int n)
{
	int dia, spa;

	if (n > 0)
	{
		for (dia = 0; dia < n; dia++)
		{
			for (spa = 0; spa < dia; spa++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (dia == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
