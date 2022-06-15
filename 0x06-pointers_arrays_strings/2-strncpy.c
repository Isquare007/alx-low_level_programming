#include "main.h"

/**
  * _strncpy - string copy
  * @dest: dest
  * @src: SRC
  * @n: maximum copy times
  * Return: Dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int src_len = 0;
	int i = 0;

	while (src[i++])
		src_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);

}
