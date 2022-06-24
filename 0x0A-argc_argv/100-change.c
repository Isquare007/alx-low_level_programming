#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * @argv: arguement vector
  * @argc: arguement count
  * Return: number of coins or 1
  */
int main(int argc, char **argv)
{
	int amt = 0, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amt = atoi(argv[1]);
	coins = 0;
	if (amt > 25)
	{
		while (amt >= 25)
			amt -= 25, coins++;
	}
	if (amt > 10 && amt < 25)
	{
		while (amt >= 10)
			amt -=10, coins++;
	}
	if (amt > 5 && amt < 10)
	{
		while (amt >= 5)
			amt -= 5, coins++;
	}
	if (amt > 2 && amt < 5)
	{
		while (amt >= 2)
			amt -= 2, coins++;
	}
	if (amt == 1 || amt == 2 || amt == 5 || amt == 10 || amt == 25)
	{
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
