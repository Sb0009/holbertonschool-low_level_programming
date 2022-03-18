#include "lists.h"

/**
 * list_len - calculates lenght link list
 * @h: point to the first element (node)
 * Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;

while (h!= NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
