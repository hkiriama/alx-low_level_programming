#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @max: first argument value
 * @min: second argument value
 * Return: pointer to new created array, or NULL
 */

int *array_range(int min, int max)
{
	int *array;
	int i = 0, size;

	if (min > max)
		return (NULL);
	size = max - min;
	size = size + 1; /*'\0'*/

	array = malloc(sizeof(int) * size);
	if (array == 0)
		return (NULL);

	while (i < size)
	{
		array[i] = min++;
		i++;
	}
	return (array);
}
