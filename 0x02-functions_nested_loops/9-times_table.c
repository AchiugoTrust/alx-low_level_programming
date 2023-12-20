#include "main.h"

/**
 * times_table: prints the 9 times table
 * description: just a 9 times table
 */

void times_table(void)
{
	int numb, mult, x;

	for (numb = 0; numb <= 9; numb++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			x = numb * mult;

			if ((x / 10) == 0)
			{
				_putchar(' ');
				_putchar(x + '0');
			} else
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}

		}
		_putchar('\n');
	}
}

