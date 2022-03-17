#include "lists.h"
/**
 * print_list - fonction
 * @h: pointeur initialized in main
 * Return: counter
 */


size_t print_list(const list_t *h)
{
	size_t count = 0;

	for (count = 0; h != NULL; count++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}
	return (count);
}
