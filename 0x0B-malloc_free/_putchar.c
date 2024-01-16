/**
 * _putchar - returns a character
 * Return: Always 0
 * @c: character of choice
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
