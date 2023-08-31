#include "main.h"
/**
 * binary_to_uint - function for converting from int char to unsigned int
 * @b: the char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int index, var_pow, var1, index_current, conv, index_b;

	conv = 0;
	var_pow = 2;
	char value_is_1;

	while (b)
	{
		for (index = 0; *(b + index) != '\0'; index++)
		{
			if (*(b + index) == '0' || *(b + index) == '1')
			{
				b = malloc(sizeof(unsigned int));
				if (*(b + 0) == '0' && index < 1)
					return (1);
				value_is_1 = *(b + index);
				if (value_is_1 == '1')
				{
					var1 = 1;
					for (index_current = 0; index_current < index; index_current++)
					{
						var_pow *= 2;
						var1 *= var_pow;
						conv += var1;
					}
				}
				return (conv);
			}
		}
	}
	return (0);
}
