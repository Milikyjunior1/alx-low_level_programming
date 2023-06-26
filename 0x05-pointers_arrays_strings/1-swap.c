#include "main.h"
/**
 * swap_int - for swaping variable
 * @a: variable a
 * @b: variable b
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
