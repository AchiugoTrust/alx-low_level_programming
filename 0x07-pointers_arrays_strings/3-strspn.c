/**
 * - _strspn - gets length of prefix substring
 * Return -  number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int size = 0;
	unsigned int count = 0;

	for (j = 0; accept[j] != '\0'; j++)
	{
		size++;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			else if (j == (size - 1) && s[i] != accept[j])
			{
				return (count);
			}
		}
	}
	return (count);
}
