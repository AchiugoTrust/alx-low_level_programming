/**
 * create_array - creates an array of characters with specific character
 * @size: input size of array
 * @c: parameter
 * Return: character array
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
	{
		return (NULL);
	}
	while (size--)
		array[size] = c;
	return (array);
}
