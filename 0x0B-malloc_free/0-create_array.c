/**
 * create_array - creates an array of characters with specific character
 * @size: input size of array
 * @c: parameter
 * Return: character array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = (char *) malloc(sizeof(char) * size);

	if (size == 0 || array == '\0')
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	array[i] = '\0';
	return (array);
}
