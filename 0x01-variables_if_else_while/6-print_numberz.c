#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 from 0
 * Return: Always 0 (success)
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		putchar((numbers % 10) + '0');
	}

	putchar('\n');
	return (0);
}
