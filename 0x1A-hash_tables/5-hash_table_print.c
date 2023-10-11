#include "hash_tables.h"
/**
 * hash_table_print - prints the keys and values of the hash table
 * @ht: pointer to the hash table
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tempo;
	char *separator;

	if (ht == NULL)
		return;
	printf("{");
	separator = "";
	for (i = 0; i < ht->size; i++)
	{
		tempo = ht->array[i];
		while (tempo != NULL)
		{
			printf("%s'%s': '%s'", separator, tempo->key, tempo->value);
			separator = ", ";
			tempo = tempo->next;
		}
	}
	printf("}\n");
}
