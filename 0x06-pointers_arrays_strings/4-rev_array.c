#include "main.h"
/**
  * reverse_array - reverse the content of a given array
  * @a: first integar
  * @n: number of element in the array
  * Return: (0)
  */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
