#include "lists.h"

/**
  * get_dnodeint_at_index - returns the node at an index
  * @head: a [pointer to the first node
  * @index: index to be returned
  * Return: NULL if it does not exist
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}

	return (head);
}
