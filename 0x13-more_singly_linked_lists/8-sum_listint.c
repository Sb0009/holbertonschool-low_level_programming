#include "lists.h"

/**
 * sum_listint -  Sum of all the data (n) of a listint_t linked list.
 * @head: pointer to head
 * Return: total  int n
 */
int sum_listint(listint_t *head)
{
	int total;
	listint_t *current;

	for (total = 0, current = head; current != NULL; current = current->next)
		total += current->n;

	return (total);
}
