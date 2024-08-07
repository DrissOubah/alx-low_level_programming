#include "search_algos.h"

/**
 * linear_search - Performs a linear search for a value in an integer array.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is found, the index where it is located.
 *         If the value is not found or the array is NULL, -1.
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
