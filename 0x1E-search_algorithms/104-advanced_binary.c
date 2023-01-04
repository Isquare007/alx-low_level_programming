#include "search_algos.h"

/**
 * binary_search_ad - searches an array using binary search algo
 * @array: array to be searched for a value
 * @r: right side of the divided array
 * @l: left side of the divided array
 * @value: value that is been searched for
 * Return: index found at or -1
 */

int binary_search_ad(int *array, size_t l, size_t r, int value)
{
	size_t mid, i;

	if (r >= l)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = l + (r - l) / 2;

		if (array[mid] == value && (mid == l || array[mid - 1] != value))
			return (mid);

		if (array[mid] >= value)
			return (binary_search_ad(array, l, mid, value));

		return (binary_search_ad(array, mid + 1, r, value));
	}

	return (-1);
}

/**
 * advanced_binary - searches an array using
 * binary search algorithm (recursively)
 *
 * @array: array to be searched for a value
 * @size: size of the array
 * @value: value that is been searched for
 * Return: index found at or -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t right, left;
	int result;

	if (array == NULL || size == 0)
		return (-1);

	left = 0;
	right = size - 1;

	result = binary_search_ad(array, left, right, value);
	return (result);
}
