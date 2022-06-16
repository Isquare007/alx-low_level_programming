#include "main.h"

/**
  * leet - leet
  * @n: encoding stringg
  * Return: (0)
  */
char *leet(char *n)
{
	int i, j = 0;
	char l[] = {'A', 'E', 'O', 'T', 'L'};
	char N[] = {'4', '3', '0', '7', '1'};

	while (n[j])
	{
		for (i = 0; i < 5; i++)
		{
			if (n[j] == l[i] ||
				n[j] - 32 == l[i])
				n[j] = N[i];
		}

		j++;
	}

	return (n);
}
