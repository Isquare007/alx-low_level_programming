#include "main.h"
/**
  * _memset - fills up the memory
  * @s: the point to memory area
  * @b: constant byte
  * @n: number of bytes
  *
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
