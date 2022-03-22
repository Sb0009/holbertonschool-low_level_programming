#include "lists.h"
/**
 *add_nodeint_end-adds a newNode at the end of a listint_t list.
 *@head:Double pointer to head node
 *@n:integer value to store in newNode
 *Return: Return newNode or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *spy;

	spy = *head;
/*Moves spy in different nodes*/
	while (spy && spy->next != NULL)
		spy = spy->next;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
/*Connection to diff node*/
	if (spy)
		spy->next = newNode;
	else
		*head = newNode;
	return (newNode);
}
