#include "lists.h"
/**
 *add_nodeint-adds a newNode node at the beginning of a listint_t list.
 *@head:Double pointer to head node
 *@n:integer value to store in newNode node
 *Return: Return newNodeNode or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *currentNode;

	currentNode = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
/*on redirige ici Direction head to newNode*/
	*head = newNode;
	if (currentNode == NULL)
		newNode->next = NULL;
	else
		newNode->next = currentNode;
	return (newNode);
}
