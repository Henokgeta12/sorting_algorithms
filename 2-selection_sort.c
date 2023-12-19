#include "sort.h"
/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the selection sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t tmp, x, y, min;

	for (x = 0; x < size - 1; x++)
	{
		min = x;
		for (y = x + 1; y < size; y++)
		{
			if (array[min] > array[y])
				min = y;
		}

		if (array[min] != array[x])
		{
			tmp = array[x];
			array[x] = array[min];
			array[min] = tmp;
		}
	}
}
