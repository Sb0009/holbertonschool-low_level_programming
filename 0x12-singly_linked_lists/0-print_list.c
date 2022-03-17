#include "lists.h"
/**
 * print_list - fonction
 * @h: pointeur initialized in main
 * Return: counter
 */

size_t print_list(const list_t *h)
{
	size_t count;

	for (count = 0 ; h; count++, h = h->next)
		printf("%d\n", h->n);

	return (count);
}
