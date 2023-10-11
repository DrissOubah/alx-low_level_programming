#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tempo1;
	hash_node_t *tempo2;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tempo1 = ht->array[i];
		while ((tempo2 = tempo1) != NULL)
		{
			tempo1 = tempo1->next;
			free(tempo2->key);
			free(tempo2->value);
			free(tempo2);
		}
	}
	free(ht->array);
	free(ht);
}
