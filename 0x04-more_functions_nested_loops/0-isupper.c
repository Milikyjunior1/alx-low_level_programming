#include "main.h"
#include  <stdio.h>
/**
 *_isupper - a function that checks for uppercase characters .
 *main - Entry block
 *@c: the character to check
 *Return: Always 0 (success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
