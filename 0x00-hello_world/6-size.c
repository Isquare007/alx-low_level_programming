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

	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a char is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of a long int is: %lu.\n", (unsigned long)sizeof(Li));
	printf("The size of a long long int is: %lu.\n", (unsigned long)sizeof(LLi));
	printf("The size of a float is: %lu.\n", (unsigned long)sizeof(f));
	return (0);
}
