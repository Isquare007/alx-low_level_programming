#include "lists.h"

/**
  * dlistint_len - a func that return the number of ements in a list
  * @h: pointer to the first node
  * Return: number of element
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
