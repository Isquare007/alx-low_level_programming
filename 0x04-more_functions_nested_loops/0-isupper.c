#include "main.h"

/**
  * _isupper - checks for upper case letter
  *
  * @c: the character in ASCII code
  *
  * Return: 1 for lower case, 0 for other
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
