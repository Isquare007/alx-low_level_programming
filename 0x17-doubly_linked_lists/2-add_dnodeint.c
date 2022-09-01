#include "lists.h"

/**
  * add_dnodeint - add a new node to the beginning of a node
  * @head: a pointer to first node
  * @n: data to be added
  * Return: address of new element or NULL
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
