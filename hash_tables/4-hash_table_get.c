#include "hash_tables.h"
/**
 * hash_table_get - get the value associated at a key
 * @ht: the hash table
 * @key: they're key associate to the hash table
 * Return: NULL or value of the key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int IndexOfKey;
	hash_node_t *ActualNode;

	if (ht == NULL || key == NULL)
		return (NULL);

	IndexOfKey = key_index((const unsigned char *)key, ht->size);
	ActualNode = ht->array[IndexOfKey];

	while (ActualNode != NULL)
	{
		if (strcmp(ActualNode->key, key) == 0)
			return (ActualNode->value);

		ActualNode = ActualNode->next;
	}
	return (NULL);

}
