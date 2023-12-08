#include "hash_tables.h"
/**
 * hash_table_delete - delete the hash table
 * @ht: the hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *AcutalNode;
	hash_node_t *NextNode;
	unsigned long int index;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		AcutalNode = ht->array[index];

		while (AcutalNode != NULL)
		{
			NextNode = AcutalNode->next;
			free(AcutalNode->key);
			free(AcutalNode->value);
			free(AcutalNode);
			AcutalNode = NextNode;
		}
	}

	free(ht->array);
	free(ht);
}
