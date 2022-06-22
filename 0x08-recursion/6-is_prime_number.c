#include "main.h"




/**
  * divisible - checks if the number is divisible
  * @num: number
  * @div: divisor
  * Return: 0 else 1
  */
int divisible(int num, int div)
{
	if ((num % div) == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (divisible(num, div + 1));
}

/**
  * is_prime_number - check if the number is a prime number
  * @n: number
  * Return: 1 else 0
  */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <=3)
		return (1);

	return (divisible(n, div));
}
