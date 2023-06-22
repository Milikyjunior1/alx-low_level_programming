#include "main.h"
/**
 * _isdigit - function that check for digit
 * Return: Always 0 (success)
 * @c:  the character to be check
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
