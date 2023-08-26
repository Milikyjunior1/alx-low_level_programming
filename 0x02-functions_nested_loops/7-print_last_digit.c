#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to be checked
 *
 * Return: last_digt
 */
int print_last_digit(int n)
{
	int end;

	if (n < 0)
		end = (n * -1) % 10;
	else
		end = n % 10;
	_putchar(end + '0');
	return (end);
}
