#include "hash_tables.h"

/**
 * hash_table_print - prints key and value for each pair in hash table.
 *
 * @hash_table: the hash table.
 */

void hash_table_print(const hash_table_t *hash_table)
{
	unsigned long int i = 0, count = 0;
	hash_node_t *node;

	if (!hash_table)
		return;
	printf("{");
	for (i = 0; i < hash_table->size; i++)
	{
		if (!hash_table->array[i])
		{
			node = hash_table->array[i];
			while (!node)
			{
				if (count > 0)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				count++;
			}
		}
	}
	printf("}\n");
}
