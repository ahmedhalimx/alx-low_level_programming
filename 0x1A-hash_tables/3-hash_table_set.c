#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 *
 * @hash_table: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0,  Otherwise - 1.
 */

int hash_table_set(hash_table_t *hash_table, const char *key,
		const char *value)
{
	hash_node_t *new;
	char *value_c;
	unsigned long int index, i;

	if (hash_table == NULL || key == NULL || *key == '\0' || value == NULL)
		return (1);

	value_c = strdup(value);
	if (value_c == NULL)
		return (1);

	index = key_index((const unsigned char *)key, hash_table->size);
	for (i = index; hash_table->array[i]; i++)
	{
		if (strcmp(hash_table->array[i]->key, key) == 0)
		{
			free(hash_table->array[i]->value);
			hash_table->array[i]->value = value_c;
			return (0);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(value_c);
		return (1);
	}
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (1);
	}
	new->value = value_c;
	new->next = hash_table->array[index];
	hash_table->array[index] = new;

	return (0);
}
