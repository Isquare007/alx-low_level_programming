#include "void print_alphabet(void)"
/**
  * main -  Entry point
  *
  * Description: print lower case alphabets
  *
  * Return: always (0) success
  */

void print_alphabet(void);
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
