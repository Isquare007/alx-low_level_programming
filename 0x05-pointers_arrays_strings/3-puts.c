#include "main.h"

/**
  * _puts - sdtout
  * @str: string
  *
  * Return: lenght
  */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
