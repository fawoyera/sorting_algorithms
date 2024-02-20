#include "sort.h"
/**
 * insertion_sort_list - sort a doubly linked list in ascending order
 * @list: pointer to the doubly linked list
 *
 * Return: void
 */
void insertion_sort_list(const listint_t **list)
{
	listint_t *dlist = *list, *head, *tail, *current, *temp, *join;

	if (dlist == NULL || dlist->next == NULL)
		return;
	while (dlist != NULL)
	{
		current = dlist;
		dlist = dlist->next;
		if (head == NULL)
		{
			current->next = NULL;
			current->prev = NULL;
			head = current;
			tail = current;
		}
		else if (current->n >= tail->n)
		{
			tail->next = current;
			current->prev = tail;
			current->next = NULL;
			tail = current;
		}
		else
		{
			temp = tail;
			while (current->n < temp->n && temp != NULL)
			{
				current->next = temp;
				current->prev = temp->prev;
				temp->prev = current;
				if (current->prev == NULL)
					head = current;
				join = tail;
				join->next = dlist;
				print_list(head);
				join->next = NULL;
				temp = current->prev;
			}
		}
	}
}
