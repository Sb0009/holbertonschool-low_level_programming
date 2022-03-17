#include "lists.h"
/**
 * add_node_end - add a NewNode at the end of `list_t` list
 * @head: double pointer to head
 * @str: string to duplicate into NewNode
 * Return: int , address of the new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *LastNode;
	list_t *tmp;

	LastNode = malloc(sizeof(list_t));
	if (LastNode == 0)
		return (NULL);

	LastNode->str = strdup(str);
	LastNode->len = strlen(str);
	LastNode->next = NULL;

	if (*head == NULL)
		*head = LastNode;

	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = LastNode;
	}
	return (LastNode);
}
