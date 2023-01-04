/*
 * _strchr - finds char in a string and returns its address
 * Return - pointer to first char c in string s
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	if (s[i] == '\0')
	{
		if (c == '\0')
		{
			return (&s[i]);
		}
		else
		{
			return ('\0');
		}
	}
else
	{
		return (&s[]);
	}
}
