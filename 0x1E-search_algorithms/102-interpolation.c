#include "search_algos.h"

/**
  * interpolation_search - Search for a value in a sorted array
  *                        of integers using interpolation search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array..
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t a, b, c;

	if (array == NULL)
		return (-1);

	for (b = 0, c = size - 1; c >= b;)
	{
		a = b + (((double)(c - b) / (array[c] - array[b])) * (value - array[c]));
		if (a < size)
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", a);
			break;
		}

		if (array[a] == value)
			return (a);
		if (array[a] > value)
			c = a - 1;
		else
			b = a + 1;
	}

	return (-1);
}
