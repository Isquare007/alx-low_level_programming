#include "main.h"
#include <string.h>

/**
  * string_nconcat - concatenates two strings
  * @s2: second string
  * @s1: first string
  * @n: number of byte in s2 to concat
  * Return: NULL or pointer
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, len1 = 0, len2 = 0, k, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n == len2 || n > len2)
		n = len2

	ptr = malloc(sizeof(char) * (len1 + n) + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		ptr[k++] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		ptr[k++] = s2[j];
	}

	ptr[k++] = '\0';

	return (ptr);
}
