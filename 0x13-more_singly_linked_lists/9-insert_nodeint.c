#include "lists.h"
#include <stdlib.h>

/**
  * insert_nodeint_at_index - insert a node at a particular position
  * @head: linked list
  * @n: index through the list
  * @idx: position to be inserted
  * Return: address or NULL if failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *temp, *new, *current;

	new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
	new->n = n;
	temp = *head;
	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (*head);
	}
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	current = temp;
	temp = temp->next;
	new->next = temp;
	current->next = new;

	if (!current)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
