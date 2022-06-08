#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: print alphabets in reverse
  *
  * Return: Always 0 (succes)
  */
int main(void)
{
	int rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}
	putchar('\n');
	return (0);
}
