#include "main.h"
#include <stdlib.h>

/**
  * _strdup - returns a pointer to an allocated spring
  * @str: string
  * Return: pointer or NULL
  */
char *_strdup(char *str)
{
	int i;
	int *ar;
	int size;

	if (str == NULL)
		return (NULL);

	size = sizeof str / sizeof str[0];

	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = str[i];
	return (ar);
}
