#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: print lowercase and uppercase
  *
  * Return: Always (0) success
  */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
char c = 'A';

	for (c = 'A'; c <= 'Z'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
