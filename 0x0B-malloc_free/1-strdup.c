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
	char *ar;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		j++;

	ar = malloc(j * sizeof(*str));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < str[i] != '\0'; i++)
		ar[i] = str[i];

	return (ar);
}
