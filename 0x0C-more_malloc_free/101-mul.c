#include "main.h"
#include <stdlib.h>

int str_len(char *str);
char *create_xarray(int size);
char *iterate_zero(char *str);
void get_prod(char *prod, char *mult, int digit, int zero);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
  * str_len - finds string lenght
  * @str: string
  * Return: lenght
  */
int str_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 *create_xarray - creates an array and initialize with x
 * @size: size of array
 * Return: pointer
 */
char *create_xarray(int size)
{
	char *ar;
	int i;

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		exit(98);

	for (i = 0; i < (size - 1); i++)
		ar[i] = 'x';
	ar[i] = '\0';

	return (ar);
}
/**
  * iterate_zero - iterates through a string of numbers containing zeroes until
  *                it hits a non-zero number
  * @str: string of number
  * Return: pointer to non zero
  */
char *iterate_zero(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
  * get_digit - converts digits to corresponding int
  * @c: the char to be converted
  * Return: the converted int
  */
int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (digit);
}

/**
  * get_prod - mul a string of numbers by a single digit
  * @prod: the buffer to store result
  * @mult: the string of number
  * @digit: the single digit
  * @zero: the neccesary number of leading zeroes
  */
void get_prod(char *prod, char *mult, int digit, int zero)
{
	int mult_len, num, tens = 0;

	mult_len = str_len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}
	prod--;
	while (zero--)
	{
		*prod = '0';
		prod--;
	}
	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}
		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}
	if (tens)
		*prod = (tens % 10) + '0';
}

/**
  * add_nums - adds the numbers stored in two strings
  * @final_prod: the buffer storing the running final product
  * @next_prod: the next product to be added
  * @next_len: the lenght of next prod
  */
void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		final_prod--;
		next_prod--;
	}

	if (tens)
		*final_prod = (tens % 10) + '0';
}

/**
  * main - multiplies two positive numbers
  * @argv: array
  * @argc: arguement count
  * Return: 0
  */
int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, i, digit, zero = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = iterate_zero(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zero(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = str_len(argv[1]) + str_len(argv[2]);
	final_prod = create_xarray(size + 1);
	next_prod = create_xarray(size + 1);

	for (i = str_len(argv[2]) - 1; i >= 0; i--)
	{
		digit = get_digit(*(argv[2] + i));
		get_prod(next_prod, argv[1], digit, zero++);
		add_nums(final_prod, next_prod, size - 1);
	}

	for (i = 0; final_prod[i]; i++)
	{
		if (final_prod[i] != 'x')
			putchar(final_prod[i]);
	}
	putchar('\n');

	free(next_prod);
	free(final_prod);

	return (0);
}
