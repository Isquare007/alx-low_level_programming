#include <stdio.h>
/**
  *
  * main - Entry point
  *
  * Description: print lowercase alphabets
  *
  * Return: always (0) success
  */
int main(void)
{
	char ch = 'a';
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
