#include "hash_tables.h"
/**
 * key_index - gives back the key-index
 * @key: is the key
 * @size: is the size of the array of the hash table
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	return (hash_value % size);
}
