#include "main.h"

/**
  * leet - leet
  * @n: encoding stringg
  * Return: (0)
  */
char *leet(char *n)
{
	int i, j = 0;
	char l[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (n[j])
	{
		for (i = 0; i <= 7; i++)
		{
			if (n[j] == l[i] ||
				str[j] - 32 == n[i])
				n[j] = i + '0';
		}

		j++
	}

	return (n);
}
