#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list
 * order using the Insertion sort algorithm
 * @list: The list to be sorted
 */


void insertion_sort_list(listint_t **list)
{
	listint_t *cur, *temp;

	if (!list || !*list)
		return;
	cur = (*list)->next;
	while (cur)
	{
		temp = cur;
		cur = cur->next;
		while (temp && temp->prev != NULL && temp->prev->n > temp->n)
		{
			temp->prev->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			temp->next = temp->prev;
			temp->prev = temp->prev->prev;
			temp->next->prev = temp;
			if (temp->prev != NULL)
				temp->prev->next = temp;
			else
				*list = temp;
			print_list(*list);
		}
	}
}
