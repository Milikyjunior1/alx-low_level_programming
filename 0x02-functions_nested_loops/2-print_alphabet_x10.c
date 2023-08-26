#include "main.h"
#include <stdio.h>
/**
 *print_alphabet_x10 - print 10 times  the alphabet in lowercase
 *Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char r;
	int  n = 0;

	while (n <= 9)
	{
		for (r = 'a'; r <= 'z'; r++)
		{
			_putchar(r);
		}
		_putchar('\n');
		n++;
	}
	_putchar('\n');
}
