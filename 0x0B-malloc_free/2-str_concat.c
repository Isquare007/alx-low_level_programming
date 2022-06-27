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

	ar = malloc(sizeof(char) * (i + j));
	if (ar == NULL)
		return (NULL);

	k = l = 0;
	while (s1[k] != '\0')
	{
		ar[k] = s1[k];
		k++;
	}
	while (s2[l] != '\0')
	{
		ar[k] = s2[l];
		k++, l++;
	}
	ar[k] = '\0';

	return (ar);
}
