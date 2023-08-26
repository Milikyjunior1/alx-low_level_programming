#include "main.h"

/**
 * _atoi - converts a string to an int.
 * @s: input str.
 * Return: int.
 */
int _atoi(char *s)
{
	unsigned int c = 0, si = 0, oi = 0, pn = 1, mn = 1, i;

	while (*(s + c) != '\0')
	{
		if (si > 0 && (*(s + c) < '0' || *(s + c) > '9'))
			break;

		if (*(s + c) == '-')
			pn *= -1;

		if ((*(s + c) >= '0') && (*(s + c) <= '9'))
		{
			if (si > 0)
				mn *= 10;
			si++;
		}
		c++;
	}

	for (i = c - si; i < c; i++)
	{
		oi = oi + ((*(s + i) - 48) * mn);
		mn /= 10;
	}
	return (oi * pn);
}
