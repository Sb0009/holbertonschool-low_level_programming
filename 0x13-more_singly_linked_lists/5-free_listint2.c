#include "lists.h"

/**
 * free_listint2 -  free  listint_t list.
 * @head: head of linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *spy;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		spy = *head;
		*head = (*head)->next;
		free(spy);
	}
}
