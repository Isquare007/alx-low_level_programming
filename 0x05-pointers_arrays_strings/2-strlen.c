#include "main.h"

/**
  * _strlen - lenght of string
  * @s: character
  *
  * Return: lenght
  */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
