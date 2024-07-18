#include "search_algos.h"
#include <stdio.h>

/**
 *interpolation_search - Searches for a value in a sorted array
 *                       of integers using interpolation search.
 *@array: A pointer to the first element of the array to search.
 *@size: The number of elements in the array.
 *@value: The value to search for.
 *
 *Return: If the value is not present or the array is NULL, -1.
 *        else, the first index where the value is located.
 *
 *Description: Prints a value every time it is compared in the array.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, next;

	if (array == NULL)
		return (-1);

	for (low = 0, high = size - 1; high >= low;)
	{
		next = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		if (next < size)
			printf("Value checked array[%ld] =[%d]\n", next, array[next]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", next);
			break;
		}

		if (array[next] == value)
			return (next);
		if (array[next] > value)
			high = next - 1;
		else
			low = next + 1;
	}

	return (-1);
}
