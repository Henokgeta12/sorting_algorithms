#include "sort.h"
/*
 * bubble_sort - Sorts an array of integers in ascending order using the Bubble Sort algorithm.
 * using the Bubble sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, y, d = 0;

	if (array == NULL || size < 2)
		return;
	for (x = 0; x < size - 1; x++)
	{
		for (y = 0; y < size - 1 - d; y++)
		{
			if (array[y] > array[y + 1])
			{
				int temp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temp;

				print_array(array, size);
			}
		}
		d++;
	}
}
