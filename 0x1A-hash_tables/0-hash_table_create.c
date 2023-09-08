#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table with a given size.
 * @size: The size of the hash table.
 *
 * Return: Pointer to the newly created hash table, or NULL if failed.
 */

hash_table_t *hash_table_create(unsigned long size)
{
	unsigned int i;
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}

	table->size = size;

	table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *));

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < table->size; i++)
	{
		table->array[i] = (NULL);
	}

	return (table);
}
