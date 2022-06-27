#include "main.h"
#include <stdlib.h>
/**
  * wordcountrec - count num of words recursively
  * @str: pointer to char
  * @i: current index
  * Return: number of words
  */
int wordcountrec(char *str, int i)
{
	if (str[i] == '\0')
		return (0);

	if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		return (1 + wordcountrec(str, i + 1));
	return (wordcountrec(str, i + 1));
}
/**
  * wordcounter - counts the number of words in 1d array
  * @str: pointer to char
  * Return: number of words
  */
int wordcounter(char *str)
{
	if (str[0] != ' ')
		return (1 + wordcountrec(str, 0));
	return (wordcountrec(str, 0));
}
/**
  * strtow - splits strings to word
  * @str: string
  * Return: NULL or pointer
  */
char **strtow(char *str)
{
	char **ar;
	int i, n, m, words;

	if (str == NULL || str[0] == 0)
		return (NULL);
	words = wordcounter(str);
	if (words < 1)
		return (NULL);

	ar = malloc(sizeof(char *) * (words + 1));
	if (ar == NULL)
		return (NULL);

	i = 0;
	while (i < words && *str != '\0')
	{
		if (*str != ' ')
		{
			n = 0;
			while (str[n] != ' ')
				n++;
			ar[i] = malloc(sizeof(char) * (n + 1));
			if (ar[i] == NULL)
			{
				while (--i >= 0)
					free(ar[--i]);
				free(ar);
				return (NULL);
			}
			m = 0; 
			while (m < n)
			{
				ar[i][m] = *str;
				m++, str++;
			}
			ar[i][m] = '\0';
			i++;
		}
		str++;
	}
	ar[i] = '\0';
	return (ar);
}
