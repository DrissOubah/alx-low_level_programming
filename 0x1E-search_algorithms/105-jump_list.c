#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 *jump_list - Searches for a value in a sorted singly linked list
 *            of integers using jump search.
 *@list: A pointer to the head of the linked list to search.
 *@size: The number of nodes in the list (not used directly in function).
 *@value: The value to search for.
 *
 *Return: If the value is not present or the head of the list is NULL, NULL.
 *        Otherwise, a pointer to the first node where the value is located.
 *
 *Description: Prints a value every time it is compared in the list.
 *             Uses the square root of the list size as the jump step.
 */
listint_t* jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;

	if (list == NULL)
		return NULL;

	step_size = sqrt(size);	// Calculate jump step size
	node = list;
	jump = list;

	// Perform jump search
	while (jump && jump->n < value)
	{
		node = jump;
		step = step_size;

		while (jump->next && jump->index < step)
		{
			jump = jump->next;
		}

		printf("Value checked at index[%ld] =[%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes[%ld] and[%ld]\n",
		node->index, jump->index);

	// Linear search in the sublist found by jump search
	while (node && node->n < value)
	{
		printf("Value checked at index[%ld] =[%d]\n", node->index, node->n);
		node = node->next;
	}

	return (node && node->n == value) ? node : NULL;
}
