#include "variadic_functions.h"

/**
  * sum_them_all - sum all its parameters
  * @n: number of parameters
  * Return: zero or sum
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_args(ap, int);

	va_end(ap);
	return (sum);
}