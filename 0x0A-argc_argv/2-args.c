#include "main.h"
#include <stdio.h>

/**
* main - function to print all arguments its receives
* @argc: argument to determine number of arguments to program
*
* @argv: argument array
*
* Return: (0)
*/

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i <= (argc - 1); i++)
	       	printf("%s\n", argv[i]);
	return (0);
}
