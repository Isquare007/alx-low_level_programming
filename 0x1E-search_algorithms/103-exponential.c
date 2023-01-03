#include "search_algos.h"

/**
 * exponential_search - searches an array using
 * exponential search and binary search algorithm
 *
 * @array: array to be searched for a value
 * @size: size of the array
 * @value: value that is been searched for
 * Return: index found at or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, l, h, mid;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}
	if (i == size)
		printf("Value found between indexes [%ld] and [%ld]\n", i / 2, (i - 1));
	else
		printf("Value found between indexes [%ld] and [%ld]\n", i / 2, (i));

	l = i / 2;
	h = size - 1;

	while (l <= h)
	{
		printf("Searching in array: ");
		for (i = l; i < h; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = l + (h - l) / 2;
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
