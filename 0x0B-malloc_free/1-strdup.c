#include "main.h"
#include <stdlib.h>

/**
  * _strdup - returns a pointer to an allocated spring
  * @str: string
  * Return: pointer or NULL
  */
char *_strdup(char *str)
{
	int i, j;
	int *ar;
	int size;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		size++;

	ar = malloc(size * sizeof(*str));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = str[i];
	return (ar);
}
