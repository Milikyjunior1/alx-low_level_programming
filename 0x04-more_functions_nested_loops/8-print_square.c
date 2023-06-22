#include  "main.h"
/**
 * print_square - for printing square
 * @size: size of square to be printed
 */
void print_square(int size)
{
	int from, to;

	if (size > 0)
	{
		for (from = 0; from < size; from++)
		{
			for (to = 0; to < size; to++)
				putchar('#');
			if (from == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
