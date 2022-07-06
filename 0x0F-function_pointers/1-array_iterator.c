#include "function_pointers.h"

/**
  * array_iterator - passes into each value of the array
  * @array: array
  * @size: size of the array
  * @action: action taken on each array elemnt
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
