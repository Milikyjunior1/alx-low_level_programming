#include "main.h"
/**
 * _islower - for changing to lowercase
 * @c: the int
 * Return: 0
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
	return (0);
}

