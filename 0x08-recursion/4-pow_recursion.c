#include "main.h"
/**
 * _pow_recursion - return nunber power
 * @x: nunber
 * @y: power
 * Return: Always 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	int r = 0;

	while (r < y)
	{
		x *= x;
		r++;
	}
	return (x);
}
