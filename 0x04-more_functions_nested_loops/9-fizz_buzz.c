#include <stdio.h>
#include <stdlib.h>

/**
  * main - print 1- 100
  *
  * 3 multiples print fizz instead of number
  * 5 multiples print buzz instead of number
  * 3 and 5 multiples print fizzbuzz
  * Return: always (0) success
  */
int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s ", b);
		else if ((i % 3 == 0) && (i % 5 ==)
				printf("%s ", fb);
				else if (i % 3 == 0)
				printf("%s ", f);
				else if (i % 5 == 0)
				ptintf("%s ", b);
				else
				printf("%d ", i);
				}
				printf("\n");
				return (0);
}
