#include "main.h"
/**
  * _islower - Entry point
  *
  * Description: check for lowercase
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
		return(0);
	}
	_putchar('\n');
}
