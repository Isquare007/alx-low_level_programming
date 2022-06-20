#include "main.h"

/**
  * _strspn - gets the lenght of the substring
  * @s: string
  * @accept: accepted string
  *
  * Return: bytes from accept
  */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int b = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				b++;
				break;
			}
			else if (accept[j + 1] == '\0')
			return (b);
		}
	}
	return (b);
}
