#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - Entry point
  * @argv: arguement vector
  * @argc:arguement count
  * Return: void or return 1 if error
  */
int main(int argc, char *argv[])
{
	int x, y;
	int mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	mul = x * y;

	printf("%d\n", mul);

	return (0);
}
