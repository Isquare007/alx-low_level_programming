#include "search_algos.h"

/**
 * linear_search - searches linearly through an array
 * @array: array to be searched for a value
 * @size: size of the array
 * @value: value that is been searched for
 * Return: index found at or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
