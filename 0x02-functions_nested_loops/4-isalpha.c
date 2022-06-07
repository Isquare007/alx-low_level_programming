#include "main.h"
/**
  * _isalpha - checks for alphabetical character
  *
  * Description: checks for lowercase or uppercase
  *
  * @c: the character in ASCII code
  *
  * Return: 1 for lower or upper case, 0 for rest
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
