#include "lists.h"

/**
  * insert_dnodeint_at_index - inserts node at an index
  * @h: apointer to the first node
  * @idx: index
  * @n: data
  * Return: address of newnode
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	new_node->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
