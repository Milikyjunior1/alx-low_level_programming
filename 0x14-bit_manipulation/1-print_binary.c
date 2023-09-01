#include "main.h"
/**
 * print_binary - function for printing binary
 * @n: the integer to be passed to print_binary
 */
void print_binary(unsigned long int n)
{
	unsigned int p, current;

	p = 0;
	while (n)
	{
		if (n == 0)
			_putchar(0);
		if (n == 1)
			_putchar(1);
		if (n > 1)
		{
			while ((n >> 1) > 0)
			{
				current = n >> 1;
				if (n >> 1 == current << 1)
				{
					p = p * 10 + 0;
				}
				if (n >> 1 > current << 1)
				{
					p = p * 10 + 1;
				}
				_puchar(p);
			}
			_putchar('\n');
		}
	}
}
