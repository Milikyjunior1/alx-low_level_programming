#include "main.h"

/**
 * print_sign - prints the sign _of a number
 * @n: The number arg_ to_ be checked
 *
 * Return: sign_of_n
 */
int print_sign(int n)
{
	int lek;

	if (n > 0)
	{
		lek  = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		lek = 0;
		_putchar('0');
	}
	else
	{
		lek = -1;
		_putchar('-');
	}
	return (lek);
}
