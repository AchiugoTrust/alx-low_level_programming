#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - function to multiply two numbers
* @argc: argument to determine number of arguments 
*
* @argv: argument array
* Return: (0)
*/

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", (a * b));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
