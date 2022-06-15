#include "main.h"

/**
  * string_toupper - converts lower case charater to upper
  * @str: string
  * Return: (0)
  */
char *string_toupper(char *str)
{
	int i;

	while (str[i] != '\0')
	{
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i++;
	}
	return (str);
}
