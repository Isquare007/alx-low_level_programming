#include "main.h"

/**
 * find_sqrt - find square root
 * @num: number
 * @root: root to be tested
 * Return: (0)
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - finds natural square root of a number
 * @n: number
 * Return: (0)
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));

}
