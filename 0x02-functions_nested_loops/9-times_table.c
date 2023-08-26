#include "main.h"

/**
  * times_table - prints the 9 times table, starting with 0
  *
  * Return: void
  */
void times_table(void)
{
	int fir, sec, mul;

	fir = 0;
	while (fir < 10)
	{
		sec = 0;
		while (sec < 10)
		{
			mul = fir * sec;
			if (sec != 9)
			{
				if ((mul / 10) == 0)
				{
					_putchar(mul + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar((mul / 10) + '0');
					_putchar((mul % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				if ((mul / 10) == 0)
					_putchar(mul + '0');
				else
				{
					_putchar((mul / 10) + '0');
					_putchar((mul % 10) + '0');
				}
			}
			sec++;
		}
		fir++;
		_putchar('\n');
	}
}
