#include "main.h"
/**
 * binary_to_uint - for converting to unsigned int
 * @b: yhe srring of charcters
 * Return: Akways 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int *s;

	while  (b)
	{
		for (int i = 0; b[i] != '\0'; i++)
		{
			if ((b[i] == 0) || (b[i] == 1))
			{
				s += power(2, i) * b[i];
				return (*s);
			}
			else
				return (0);
		}
	}
}
