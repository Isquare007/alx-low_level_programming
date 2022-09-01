#include "lists.h"

/**
  * sum_dlistint - sums all the data in the list
  * @head: a pointer to the first node
  * Return: 0 if list is empty
  */
int sum_dlistint(dlistint_t *head)
{
	int sum_data = 0;

	while (head->next != NULL)
	{
		sum_data += head->n;
		head = head->next;
	}
	return (sum_data);
}
