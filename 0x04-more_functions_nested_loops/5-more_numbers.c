#include "main.h"
/**
  * more_numbers - 10 times
  *
  * Return: 0
  */
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		for (j = '0'; j <= 14; j++)
			_putchar(j);
	}
	_putchar('\n');
}
