#include "main.h"
#include <stdio.h>
/**
 * main -  program that prints the number of arguments with a new line
 * @argc: program argument counter
 * @argv: array
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
