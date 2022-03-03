#include "main.h"
#include <stdlib.h>

/**
 *_calloc - containr * nmemb.
 * @nmemb: box
 * @size: size bx.
 * Return: ptr to array.
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cont;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	cont = malloc(size * nmemb);

	if (cont == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		cont[i] = 0;

	return (cont);
}
