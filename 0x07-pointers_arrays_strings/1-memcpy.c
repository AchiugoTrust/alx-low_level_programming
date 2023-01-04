/*
 * _memcpy - copies n bytes from memory area src to dest
 * Return - pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int num = +n;

	for (i = 0; i < num; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
