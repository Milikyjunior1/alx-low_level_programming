#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to be checked
 *
 * Return: islower_bool value
 */
int _islower(int c)
{
	char lowercase = 'a';
	int islower = 0;

	while (lowercase <= 'z')
	{
		if (lowercase == c)
			islower = 1;
		lowercase++;
	}
	return (islower);
}
