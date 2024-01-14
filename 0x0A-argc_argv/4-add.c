#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - function to add positive numbers
* @argc: argument to determine number of arguments
* @argv: argument array
* Return: (0)
*/

int main(int argc, char *argv[])
{
	int a, b;
	int res;

	res = 0;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		for (a = 1; a <= (argc - 1); a++)
		{
			for (b = 0; argv[a][b]; b++)
			{
				if (isdigit(argv[a][b]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			if (atoi(argv[a]) >= 0)
			{
				res = res + atoi(argv[a]);
			}
		}
	}
	printf("%d\n", res);
	return (0);
}
