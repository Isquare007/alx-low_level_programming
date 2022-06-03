#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: print numbers in base 16
  *
  * Return: Always (0) success
  */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (num = 'a'; num <= 'f'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
