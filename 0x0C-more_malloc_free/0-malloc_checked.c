#include "main.h"

/**
  * malloc_checked - allocates memory using malloc
  * @b: memeory size to allocate
  * Return: pointer
  */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
