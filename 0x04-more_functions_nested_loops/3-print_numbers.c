#include "main.h"
/**
  * print_numbers - print numbers
  *
  * Return: 0
  */
void print_numbers(void)
{
	int d;

	for (d = 48; d <= 57; d++)
	{
		_putchar(d + '0');
	}
	_putchar('\n');
}
