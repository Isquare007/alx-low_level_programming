#include "main.h"

/**
  * _strpbrk - searches a string for set of bytes
  * @s: string
  * @accept: string to be accepted
  * 
  * Return: first match of byte in accept else NULL
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				return (s);
	}
	return(0);
}
