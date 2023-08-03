#include "main.h"
/**
 * power - for getting power of interger
 * @a: the number
 * @b: the power
 * Return: Always 0
 */
int power(int a, int b)
{
	int c, h;

	if (b == 0)
		return (1);
	for (h = 0; h < b; h++)
	{
		c *= a;
		return (c);
	}
}
