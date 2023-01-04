#include "main.h"
#include <stdio.h>

/**
 * chessboard - function prints chessboard
 */
void print_chessboard(char (*a)[8])
{
	int rows = 0;
	int columns = 0;

	for (rows = 0; rows < 8; rows++)
	{
		for (columns = 0; columns < 8; columns++)
		{
			_putchar(a[rows][columns]);
		}
		_putchar(10);
	}
}
