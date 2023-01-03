#include "search_algos.h"

/**
 * binary_search - searches an array using binary search algo
 * @array: array to be searched for a value
 * @size: size of the array
 * @value: value that is been searched for
 * Return: index found at or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, low, high, i;

	if (array == NULL || size == 0)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);

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
