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
	for (c >= 65; c <= 90; c++)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
