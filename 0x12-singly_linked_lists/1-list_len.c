#include "lists.h"

/**
 * list_len - main function
 * @h: point to the first element (node)
 * Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			return (0);
		}
		else
		{
			h = h->next;
			node++;
		}
	}
return (node);

}
