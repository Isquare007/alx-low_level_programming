#include "search_algos.h"
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *node, *p;
	size_t step, m;

	if (!list)
		return (NULL);

	step = sqrt(size);
	node = list;

	while (node->index < size && node->n < value)
	{
		 m += step;
		 while (node->index != m)
			node = node->next;
	}
	p = list;

	while (p != node && p->n != value)
		p = p->next;

	if (p->n == value)
		return (p);

	return (NULL);
}
