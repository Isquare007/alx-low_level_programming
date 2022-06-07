#include "main.h"
/**
  * _islower - Entry point
  *
  * Description: check for lowercase
  *
  *@c: the character in ASCII code
  *
  * Return: (void)
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
