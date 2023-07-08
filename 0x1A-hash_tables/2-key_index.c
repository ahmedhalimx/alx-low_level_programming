#include "hash_tables.h"

/**
 * key_index - retunrs the key's index.
 *
 * @key: a string.
 * @size: an int.
 *
 * Return: Index number for the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
