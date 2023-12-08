#include "hash_tables.h"
/**
 * hash_table_print - print the content of a hash table
 * @ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *AcutalNode;

	if (ht == NULL)
		return;

	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		AcutalNode = ht->array[index];

		while (AcutalNode != NULL)
		{
			printf("'%s': '%s'", AcutalNode->key, AcutalNode->value);

			if (AcutalNode->next != NULL)
				printf(", ");

			AcutalNode = AcutalNode->next;
		}
	}

	printf("}\n");
}
