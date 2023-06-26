#include "main.h"
/**
 * rev_string - for reverse printing
 * @s: the reverse string
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i, j, len;
	char tmp;

	j  = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	len = j - 1;
	for (i = 0; i < j / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len--] = tmp;
	}
}
