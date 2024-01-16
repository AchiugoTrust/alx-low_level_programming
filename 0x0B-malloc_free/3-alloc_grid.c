#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: parameter 1
 * @height: parameter 2
 * Return: pointer to matrix
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int a, b;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		array[a] = (int *) malloc(sizeof(int) * width);
		if (array[a] == NULL)
		{
			free(array);
			for (b = 0; b <= a; b++)
				free(array[b]);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			array[a][b] = 0;
		}
	}
	return (array);
}
