#include "sort.h"

void swap_index(int *a, int *b)
{
	int holder;

	holder = *a;
	*a = *b;
	*b = holder;
}
