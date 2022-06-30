#include "main.h"

/**
  * array_range - creates array of integars form min to max
  * @min: minimum int
  * @max: maximum int
  * Return: pointer to array or NULL
  */
int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;

	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size && min <= max; i++, min++)
		*(p + i) = min;
	return (p);
}
