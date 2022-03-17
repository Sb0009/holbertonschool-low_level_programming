#include "lists.h"
/**
 * add_node - add a new node at the beginning of `list_t` list
 * @head: dobble pointer to head
 * @str: string to be saved in New Node, mustbe duplicated
 * Return: Address of new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *NewNode;
	int count;

	NewNode = malloc(sizeof(list_t));
	if (NewNode == NULL)
		return (NULL);
	for (count = 0; str[count] != '\0'; count++)
		;
	NewNode->len = count;
	NewNode->str = strdup(str);
	NewNode->next = *head;
	*head = NewNode;
	return (*head);
}
