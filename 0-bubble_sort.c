#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order.
 *
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 *
 * Description: This function sorts the array in ascending order
 * using the bubble sort algorithm. It compares adjacent elements and swaps
 * them if they are in the wrong order until the entire array is sorted.
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, y, d = 0;

	if (array == NULL || size < 2)
		return;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size - d - 1; y++)
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
