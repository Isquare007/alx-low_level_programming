#include <stdio.h>
#include <unistd.h>

/**
  * main - Entry point
  *
  * Description: print a certain text
  *
  * Return: Always return 1 success
  */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
