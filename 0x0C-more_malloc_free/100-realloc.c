#include "main.h"

/**
  * _realloc - reallocates memory block
  * @ptr: pointer
  * @old_size: old size
  * @new_size: new size
  * Return: pointer or NULL
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *realloc, *p;
	unsigned int i;

	if (ptr != NULL)
		p = ptr;
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}

	realloc = malloc(new_size);
	if (realloc == NULL)
		return (0);

	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(realloc + i) = p[i];
	}
	free(ptr);
	return (realloc);
}
