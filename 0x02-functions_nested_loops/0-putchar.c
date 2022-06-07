i#include "main.h"
/**
  * main - Entry point
  *
  * Description: prints _putchar
  *
  * Return: always (0) success
  */

int main(void)
{
	char p[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
