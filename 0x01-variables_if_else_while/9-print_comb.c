#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10
 * from 0 with a comma and space
 * Return: Always 0 (success)
 */
int main(void)
{
	int numbers;

	for (numbers = 48; numbers < 58; numbers++)
	{
		putchar(numbers);

		if (numbers != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
