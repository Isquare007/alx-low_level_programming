#include "variadic_functions.h"

/**
  * print_strings - prints a string
  * @seperator: string to be printed between the strings
  * @n: numbers of strings passed
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(strings);
	unsigned int i;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(strings, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
		{
			printf("%s", ptr);
			if (i < (n - 1) && seperator != NULL)
				printf("%s", seperator);
		}
	}
	va_end(strings);
	printf("\n");
}
