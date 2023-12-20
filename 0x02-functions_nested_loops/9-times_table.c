#include "main.h"

/**
 * times_table: prints the 9 times table
 */

void times_table(void)
{
	int numb, mult, x;

	for (numb = 0; numb <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			x = numb * mult;

			if (x <= 9)
			{
				_putchar(' ');
			} else
			{
				_putchar((x / 10) + '0');

			_putchar((x % 10) + '0');
			}

		}
		_putchar('\n');
	}
}

