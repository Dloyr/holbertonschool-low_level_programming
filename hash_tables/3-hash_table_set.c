#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key of the hash table
 * @value: it's the value who correspond to the key
 * Return: 0 for error and 1 for success
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int IndexOfKey;
	hash_node_t *New_node, *Actual_Node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	IndexOfKey = key_index((const unsigned char *)key, ht->size);
	Actual_Node = ht->array[IndexOfKey];

	New_node = malloc(sizeof(hash_node_t));
	if (New_node == NULL)
		return (0);

	New_node->key = strdup(key);
	if (New_node->key == NULL)
	{
		free(New_node);
		return (0);
	}

	New_node->value = strdup(value);
	if (New_node->value == NULL)
	{
		free(New_node->key);
		free(New_node);
		return (0);
	}

	New_node->next = ht->array[IndexOfKey];
	ht->array[IndexOfKey] = New_node;

		return (1);
}
