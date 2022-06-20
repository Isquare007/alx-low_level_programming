#include "main.h"

/**
  * _strchr - checks for the occurance of a character
  * @s: string
  * @c: character
  *
  * Return: c if found else NULL
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
