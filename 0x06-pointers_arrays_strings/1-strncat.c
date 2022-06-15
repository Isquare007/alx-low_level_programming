#include "main.h"

/**
  * _strncat - concatenates two strings at most n byte
  * @dest: dest
  * @src: SRC
  * @n: n of byte
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest = 0;
	int len_src = 0;
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		len_dest++;
		i++;
	}
	while (src[j] != '\0')
	{
		len_src++;
		j++;
	}
	for (i = 0; i <= len_src && i < n; i++)
	{
		dest[len_dest + i] = src[i];
	}
	return (dest);
}
