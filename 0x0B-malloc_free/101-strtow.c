#include "main.h"
#include <stdlib.h>
/**
  * wordlen - count num of words recursively
  * @str: pointer to char
  * Return: number of words
  */
int wordlen(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}
	return (len);
}
/**
  * wordcount - counts the number of words in 1d array
  * @str: pointer to char
  * Return: number of words
  */
int wordcount(char *str)
{
	int i = 0, words = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
				i += wordlen(str + i);
		}
	}
	return (words);
}
/**
  * strtow - splits strings to word
  * @str: string
  * Return: NULL or pointer
  */
char **strtow(char *str)
{
	char **ar;
	int i = 0, w, letters, l, words;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = wordcount(str);
	if (words == 0)
		return (NULL);
	ar = malloc(sizeof(char *) * (words + 1));
	if (ar == NULL)
		return (NULL);
	for (w = 0; w < words; w++)
	{
		while (str[i] == ' ')
			i++;
		letters = wordlen(str + i);

		ar[w] = malloc(sizeof(char) * (letters + 1));

			if (ar[w] == NULL)
			{
				for (; w >= 0; w--)
					free(ar[w]);

				free(ar);
				return (NULL);
			}
			for (l = 0; l < letters; l++)
				ar[w][l] = str[i++];

			ar[w][l] = '\0';
	}
	ar[w] = NULL;

	return (ar);
}
