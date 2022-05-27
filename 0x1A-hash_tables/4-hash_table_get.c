#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 *hash_table_get - Get the value of a key in array
 *@ht: header of the table
 *@key: key
 *Return: The key's value or NULL if the key doesn't exit
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx] == NULL)
		return (NULL);

	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
