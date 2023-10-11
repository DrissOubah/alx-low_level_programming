#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: The hash table
 * @key: The key of the new element
 * @value: The value of the new element
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *n_hash_node = NULL;
	hash_node_t *tempo = NULL;

	if (!ht || !key || !(*key) || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	tempo = ht->array[index];
	while (tempo && strcmp(tempo->key, key) != 0)
		tempo = tempo->next;
	if (tempo)
	{
		free(tempo->value);
		tempo->value = strdup(value);
		return (1);
	}
	n_hash_node = malloc(sizeof(*n_hash_node));
	if (!n_hash_node)
		return (0);
	n_hash_node->key = strdup(key);
	n_hash_node->value = strdup(value);
	n_hash_node->next = ht->array[index];
	ht->array[index] = n_hash_node;
	return (1);
}
