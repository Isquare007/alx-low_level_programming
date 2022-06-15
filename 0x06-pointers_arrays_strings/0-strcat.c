#include "main.h"

/**
  * _strcat - concatenates strings
  * @dest: dest
  * @src: SRC
  * Return: dest
  */
char *_strcat(char *dest, char *src)
{
	int len_dest = 0;
	int len_src = 0;
	int i = 0;
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
		len_dest++;
	}
	while (src[i] != '\0')
	{
		i++;
		len_src++;
	}
	for (i = 0; i <= len_src; i++)
	{
		dest[len_dest + i] = src[i];
	}
	return (dest);

}
