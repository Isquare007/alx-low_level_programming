#include "search_algos.h"

/**
 * jump_search - searches an array using jump search algo
 * @array: array to be searched for a value
 * @size: size of the array
 * @value: value that is been searched for
 * Return: index found at or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t m, step, i;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	m = 0;
	i = 0;

	while (m < size && array[m] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", m, array[m]);
		i = m;
		m += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, m);
	
	if (m > size)
		m = size - 1;
	
	for (; i < m && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	if (i <= m)
		printf("Value found between indexes [%ld] and [%d]\n", i, array[i]);

	for (i = i; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
