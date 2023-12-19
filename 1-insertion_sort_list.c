#include "sort.h"

/**
 * insertion_sort_list - An insertion sort algorithm of a linked list
 * @list: Address of a pointer to a list pointer
 *
 * Return: void
 *
 * #include <stdio.h>
*
*int main()
*{
*    printf("Hello, World!\n");
*    int numarray[] = {81, 4, 2, 8, 1, 6, 10, 3, 0};
*    printf("start\n");
*    int arlen = sizeof(numarray)/sizeof(numarray[0]);
*    printf("{81, 4, 2, 8, 1, 6, 10, 3}\n");
*    int i = 1;
*    for(int i = 1; i<arlen; i++)
*    {
*        int j = i;
*        while (j > 0 )
*        {
*            int key = numarray[j];
*           if (key < numarray[j-1])
*            {
*                numarray[j] = numarray[j - 1];
*               numarray[j - 1] = key;
*            }
*  printf("n[%d] = %d, n[%d] = %d\n", j-1, numarray[j-1], j, numarray[j]);
*            j = j - 1;
*        }
*    }
*    printf("========================\n");
*    for (int i = 0; i<= arlen - 1; i++)
*    {
*        printf("num[%d] = %d \n", i, numarray[i]);
*    }
*
*    return 0;
*}
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev_node;
	listint_t *next_node;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		prev_node = current->prev;
		next_node = current->next;

		while (prev_node != NULL && prev_node->n > current->n)
		{
			/* Swapping of current and prev_node */
			if (prev_node->prev != NULL)
				prev_node->prev->next = current;
			else
				*list = current;

			if (current->next != NULL)
				current->next->prev = prev_node;

			prev_node->next = current->next;
			current->prev = prev_node->prev;
			current->next = prev_node;
			prev_node->prev = current;
			prev_node = current->prev;
			print_list(*list);
		}
		current = next_node;
	}
}
