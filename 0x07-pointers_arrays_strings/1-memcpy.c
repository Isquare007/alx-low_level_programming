#include "main.h"

/**
  * _memcpy - copy n byte from memory area
  * @dest: destination
  * @src: memory area
  * @n: number of byte
  *
  * Return: dest
  */
char  *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
