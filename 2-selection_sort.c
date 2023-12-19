#include "sort.h"

/**
 * selection_sort - algorithm to sort an array
 * @array: to be sorted
 * @size: of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	size_t min = 0, temp = 0;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;

		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
