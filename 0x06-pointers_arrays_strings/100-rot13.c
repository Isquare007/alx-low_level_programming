#include "main.h"

/**
  * rot13 - Rotate by 13 places
  * @s: string
  * Return: s
  */
char *rot13(char *s)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "MNOPQRSTUVWXYZABCDEFGHIJKLmnopqrstuvwxyzabcdefghijkl";
	int i = 0, j;

	while (s[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[i];
				break;
			}
		}
		i++;
	}
	return (s);
}
