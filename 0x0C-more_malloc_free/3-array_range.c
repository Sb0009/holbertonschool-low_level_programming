#include "main.h"
#include <stdlib.h>

/**
 * array_range - array with countable inside
 * from min to max.
 *
 * @min: first item
 * @max: last item.
 * Return: ptr to array.
 **/

int *array_range(int min, int max)
{
	int i, key, value;
	int *tab;

	if (min > max)
		return (NULL);

	key = max - min + 1;
	tab = malloc(sizeof(int) * key);
	if (tab == NULL)
		return (NULL);
	value = min;
	for (i = 0; i < key; i++)
	{
		tab[i] = value;
		value++;
	}

	return (tab);
}
