#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to the hash table
 * @key: key of the hash
 * Return: value of the hash.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_in;
	hash_node_t *tempo;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);
	key_in = key_index((unsigned char *)key, ht->size);
	tempo = ht->array[key_in];
	while (tempo != NULL)
	{
		if (strcmp(tempo->key, key) == 0)
			return (tempo->value);
		tempo = tempo->next;
	}
	return (NULL);
}
