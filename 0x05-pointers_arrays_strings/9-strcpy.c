#include "main.h"

/**
  * _strcpy - string copy pointed bt src, including the terminating null byte
  * @src: src
  * @dest: buffer to copy the string to 
  * Return: dest
  */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}
