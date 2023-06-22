#include "main.h"
/**
 * more_numbers - function that produce more number
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int n, r;

	r = 0;
	while (r < 10)
	{
		for (n = 0; n <= 14; n++)
			_putchar(n);
		r++;
		_putchar('\n');
	}
	_putchar('\n');
	return (0);
}
