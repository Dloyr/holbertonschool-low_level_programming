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
	int keyindex = key_index((const unsigned char *)key, ht->size);
	unsigned int index = 0;

	while (ht->array[keyindex]->key != NULL && (index < ht->size))
	{
		if (strcmp(ht->array[keyindex]->key, key) == 0)
		{
			free(ht->array[keyindex]->value);
			ht->array[keyindex]->value = strdup(value);

			return (1);
		}
		keyindex = (keyindex + 1) % ht->size;
		index++;
	}

	if (ht->array[keyindex]->key == NULL)
	{
		ht->array[keyindex] = malloc(sizeof(hash_node_t));
		if (ht->array[keyindex] == NULL)
			return (0);

		ht->array[keyindex]->key = strdup(key);
		ht->array[keyindex]->value = strdup(value);
		return (1);
	}
	return (0);
}
