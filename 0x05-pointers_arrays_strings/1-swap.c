#include "main.h"
/**
  * swap_int - swap two integars
  * @a: first integar
  * @b: second integar
  *
  * Return: swapped integars
  */
void swap_int(int *a, int *b)
{
	int d;
	int c;

	d = *a;
	c = *b;
	*a = d;
	*b = c;
}
