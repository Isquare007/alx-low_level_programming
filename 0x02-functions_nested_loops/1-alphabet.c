#include "main.h"
/**
  * main -  Entry point
  *
  * Description: print lower case alphabets
  *
  * Return: (void)
  */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
