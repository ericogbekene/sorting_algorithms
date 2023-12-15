#include "sort.h"
#include <stdbool.h>

/**
 * bubble_sort - algorithm to sort an array in ascending order
 * @array: of integers to be sorted
 * @size: of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped = 0;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				/*swap_index(&array[j], &array[j + 1]);*/
				print_array(array, size);
				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
	}
}
