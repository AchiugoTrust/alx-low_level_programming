#include <stdio.h>
/**
 * main - prints alphabet in lower case
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower;

	for (lower = 'a', lower <= 'z', lower++);
	{
		putchar(lower);
	}
	putchar(\n);
	return (0);

