#include "search_algos.h"
  
/**
 * binary_search - searches an array using binary search algo
 * @array: array to be searched for a value
 * @size: size of the array
 * @value: value that is been searched for
 * Return: index found at or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
        size_t pos, l, h, i;

        if (array == NULL || size == 0)
                return (-1);

        l = 0;
        h = size - 1;

	while (low <= high)
	{
		pos = l + (value - array[l])/(array[h] - array[l]) * (h - l);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			l = pos + 1;
		else
			h = pos - 1;
	}
	return (-1)
