#include "main.h"
#include <stdio.h>
/**
 *print_alphabet_x10 - function that print 19 times  the alphabet in lower case follow by new line
 *Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char r;

	for (r = 'a'; r <= 'z'; r++)
	{
		_putchar(r * 10);
	}
	putchar('\n');
}
