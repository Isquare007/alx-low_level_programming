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

	for (tens = 0; tens <= 9; tens++)
	{
		for (ones = tens + 1; ones <= 9; ones++)
		{
			putchar(tens + '0');
			putchar(ones + '0');

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
