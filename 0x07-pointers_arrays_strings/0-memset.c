/**
 * _memset - fills memory with constant byte
 * Return - pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	int num = +n;

	for (i = 0; i < num; i++)
	{
		s[i] = b;
	}
	return (s);
}
