#include "variadic_functions.h"

/**
  * print_numbers - print numbers
  * @separator: string to be printed between numbers
  * @n: number: number of integars
  * Return: NULL if seperator is null
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(num);
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, unsigned int));
		if (i < (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	va_end(num);
	printf("\n");
}
