#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * Return: Always 0
 */
int main(void)
{
	int b;

	b = 1;
	printf("%d", b);

	for (b = 2; b <= 100; b++)
	{
		if ((b % 3 == 0) && (b % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (b % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (b % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", b);
		}
	}
	printf("\n");
	return (0);
}

