#include "main.h"
#include <stdio.h>

/**
  * alloc_grid - allocate grid
  * @width: width
  * @height: height
  * Return: NULL or pointer
  */
int *alloc_grid(int width, int height)
{
	int **2d;
	int wid_i, hgt_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	2d = malloc(sizeof (int *) * height);

	if (2d == NULL)
		return (NULL);

	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		2d[hgt_i] = malloc(sizeof(int) * width);
		if (2d[hgt_i] == NULL)
		{
			for (; hgt_i >= 0; hgt_i--)
				free(2d[hgt_i]);

			free(2d);
			return (NULL);
		}
	}
	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		for (wid_i = 0; wid_i < width; wid_i++)
			2d[hgt_i][wid_i] = 0;
	}
	return (2d);
}
