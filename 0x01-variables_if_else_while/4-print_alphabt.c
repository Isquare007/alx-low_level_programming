#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: prints low case alphabets without q ans e
  *
  * Return: Alqways (0) success
  */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	if (alpha  != 'e' && alpha != 'q')
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
