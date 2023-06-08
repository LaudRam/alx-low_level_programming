#include "hash_tables.h"

/**
 * key_index - gives index of a key
 * @key: the key
 * @size: size of array of hash table
 * Return: index at which the key pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	hash = hash % size;
	return (hash);
}
