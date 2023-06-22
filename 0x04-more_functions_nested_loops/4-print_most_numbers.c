#include "main.h"
/**
 * print_most_numbers - function that print number 0_9 and remove 2 and 4
 * Return: Always 0 (success)
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
			_putchar(n);
	}
	putchar('\n');
}

