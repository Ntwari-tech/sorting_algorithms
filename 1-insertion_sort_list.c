#include "sort.h"

/**
 * insertion_sort_list - sorts a list using the insertion algorthim
 * @list: is the list to be sorted
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{

	listint_t *current = NULL, *tmp = NULL, *lastNode = NULL;

	if (list == NULL)
		return;
	current = (*list)->next;
	tmp = current;
	while (current != NULL)
	{
		current = current->next;

		if (tmp->n < tmp->prev->n)
		{
			while (tmp->prev != NULL && tmp->n < tmp->prev->n)
			{
				lastNode = tmp->prev;
				lastNode->next = tmp->next;
				if (lastNode->prev != NULL)
				{
					lastNode->prev->next = tmp;
				}
				if (tmp->next != NULL)
				{
					tmp->next->prev = lastNode;
				}

				tmp->prev = lastNode->prev;
				tmp->next = lastNode;
				lastNode->prev = tmp;
				if (tmp->prev == NULL)
				{
					(*list) = tmp;
				}
				print_list(*list);
			}
		}
		tmp = current;

	}
}
