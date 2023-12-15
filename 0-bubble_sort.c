#include "sort.h"
#include <stdbool.h>

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	bool swapped = false;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				/*swap_index(&array[j], &array[j + 1]);*/
				print_array(array, size);
				swapped = true;
			}
		}
		if (swapped == true)
			break;
	}
}
