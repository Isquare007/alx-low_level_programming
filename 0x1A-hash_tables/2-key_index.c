#include "hash_table.h"

/**
 * key_index - get the index at which a
 * key/value pair shold be sorted in array of hash table
 * @key: the key to get index
 * @size: the size of the array
 * Return: The key's index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
