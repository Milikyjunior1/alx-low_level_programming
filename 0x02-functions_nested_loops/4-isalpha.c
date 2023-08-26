#include "main.h"
/**
 * _isalpha - for checking alphabet character
 * @c: The argument to be checked
 *
 * Return: isletter value
 */
int _isalpha(int c)
{
	char lowercase, uppercase;
	int isletter = 0;

	lowercase = 'a';
	while (lowercase <= 'z')
	{
		uppercase = 'A';
		while (uppercase <= 'Z')
		{
			if (c == lowercase || c == uppercase)
				isletter = 1;
			uppercase++;
		}
		lowercase++;
	}
	return (isletter);
}
