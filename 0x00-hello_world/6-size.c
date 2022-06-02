#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: print sizes of constants
  *
  * Return: (0) success
  */

int main(void)
{
	int i;
	char c;
	long int Li;
	long long int LLi;
	float f;

	printf("Size of an int is: %lu byte(s)\n", sizeof(i));
	printf("Size of a char is: %lu byte(s)\n", sizeof(c));
	printf("Size of a long int is: %lu byte(s)\n", sizeof(Li));
	printf("Size of longlong int is: %lu byte(s)\n", sizeof(LLi));
	printf("Size of a float is: %lu bytes(s)\n", sizeof(f));
	return (0);
}
