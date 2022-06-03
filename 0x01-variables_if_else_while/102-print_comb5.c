#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: prints all possible combinations of two two-digit numbers.
  *
  * Return: Always (0) success
  */
int main(void)
{
	int tens;
	int ones;

	for (tens = 0; tens <= 0; tens++)
	{
		for (ones = 0; ones <= 0; ones++)
		{
			putchar(tens + '0');
			putchar(tens + '0');

			if (ones < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
