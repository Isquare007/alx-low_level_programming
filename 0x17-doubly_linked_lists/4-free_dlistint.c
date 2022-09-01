#include "lists.h"

/**
  * free_dlistint - frees dlistint
  * @head: a pointer to the first node
  * Return: NULL
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_list;

	while (head != NULL)
	{
		free_list = head->next;
		free(head);
		head = free_list;
	}
}
