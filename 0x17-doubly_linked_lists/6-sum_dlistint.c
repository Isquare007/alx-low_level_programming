#include "lists.h"

/**
  * sum_dlistint - sums all the data in the list
  * @head: a pointer to the first node
  * Return: 0 if list is empty
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
