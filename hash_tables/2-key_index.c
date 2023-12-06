#include "hash_tables.h"
/**
 * key_index - give the index of a key
 * @key: the key we search his index
 * @size: the tall of the value of key
 * Return: the value of the index of key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
