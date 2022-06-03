#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: print all possibe combination of single digit
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num + '0');
		if (num < 9)
			puthcar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
