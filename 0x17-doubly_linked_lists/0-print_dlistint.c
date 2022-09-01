#include "lists.h"

/**
  * print_dlistint - a func that prints all the elements of a list
  * @h: a pointer pointing to the first node
  * Return: the number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
		const dlistint_t *list;
		size_t i;

		list = h;
		while (list != NULL)
		{
				printf("%d\n", list->n);
				list = list->next;
				i++;
		}
		return (i);
}
