#include <stdio.h>
#include "main.h"
/**
 *print_alphabet - print the alphabet in lower case follow by new line
 *Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
