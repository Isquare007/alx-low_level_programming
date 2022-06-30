#include "main.h"

/**
  * _calloc - allocates memory for an array
  * @nmemb: array name
  * @size: size of the array
  * Return: NULL or pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, n;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	n = nmemb * size;
	for (i = 0; i < n; i++)
		*(ptr + i) = 0;
	return ((void *)ptr);
}
