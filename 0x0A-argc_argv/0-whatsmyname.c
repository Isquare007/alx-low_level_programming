#include <stdio.h>
#include "main.h"

/**
  * main - Entry point
  * @argv: arguement vector
  * @argc: arguement count
  * Return: void
  */
int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", *argv);
	return (0);
}
