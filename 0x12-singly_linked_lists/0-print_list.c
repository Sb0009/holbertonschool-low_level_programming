#include "lists.h"
/**
 * print_list - fonction
 * @h: pointeur initialized in main
 * Return: count
 */


size_t print_list(const list_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		node++;
	}
return (node);
}
