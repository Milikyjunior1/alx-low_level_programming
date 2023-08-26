#include "main.h"
/**
 * _isalpha - for checking for alphabet
 * @c: the alpha to be check
 * Return: 1 err 0
 */
int _isalpha(int c)
{
	char b, d;

	for (b = 'a'; b <= 'z'; b++)
	{
		if (c == b)
		{
			return (1);
		}
		else
			return (0);
	}
	for (d = 'A'; d <= 'Z'; d++)
	{
		if (d == c)
			return (1);
		else
			return (0);
	}
}
