#include "main.h"

/**
  * _puts - sdtout
  * @str: string
  *
  * Return: lenght
  */
void _puts(char *str)
{
	int len = 0;

	while(*(str + 1) != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
