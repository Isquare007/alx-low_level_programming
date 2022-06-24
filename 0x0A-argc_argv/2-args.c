#include "main.h"
#include <stdio.h>

/**
  * main - Entry point
  * @argc: arguement count
  * @argv: arguement vector
  * Return: void
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
