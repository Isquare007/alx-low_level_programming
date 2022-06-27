#include <stdlib.h>
#include "main.h"

/**
  * str_concat - concaterate two strings
  * @s1: string 1
  * @s2: string 2
  * Return: pointer to s1 or NULL
  */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		i++;

	for (j = 0; s2[j] != '\0'; j++)
		j++;

	ar = malloc((sizeof(*s1) * i) + (j * sizeof(*s2)) + 1);
	if (ar == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		ar[k] = s1[k];
	for (l = 0; l < j; l++)
		ar[(k + 1) + l] = s2[l];

	ar[k + l] = '\0';

	return (ar);
}
