#include "main.h"
/**
  * main - Entry point
  *
  * Return: (void)
  */
void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		for (j = 97; j < 123; j++)
			_putchar(j);
	}
	_putchar('\n');
}
