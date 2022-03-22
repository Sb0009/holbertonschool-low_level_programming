#include "lists.h"

/**
 * *reverse_listint -  reverses a listint_t linked list.
 * @head: head node
 * Return: head node
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (!head || !*head)
		return (NULL);

	prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
