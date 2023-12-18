#include "sort.h"
/*
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: The array to be sorted.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
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
