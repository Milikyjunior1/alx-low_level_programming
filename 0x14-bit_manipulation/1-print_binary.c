#include "main.h"
/**
 * print_binary - for printing binary
 * @n: the number to be converted
 * Return: Alwayd 0
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
