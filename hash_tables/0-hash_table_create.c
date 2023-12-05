#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: size of the hash table
 * Return: NULL or the hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index;

	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t) * size);

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (index = 0; index < table->size; index++)
		table->array[index] = NULL;

	return (table);
}
