#include <stdio.h>
/**
 * main - prints alphabets in lower case except q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase != 'q' && lowercase != 'e')
			putchar(lowercase);
	}

	putchar('\n');
	return (0);
}
