#include "sort.h"

/**
 * swp - takes two nodes and swap them
 *
 * @h: pointer to the head of the list
 * @nd1: pointer to the first node
 * @nd2: pointer to the second node
 */
void swp(listint_t **h, listint_t **nd1, listint_t *nd2)
{
	(*nd1)->next = nd2->next;
	if (nd2->next != NULL)
		nd2->next->prev = *nd1;
	nd2->prev = (*nd1)->prev;
	nd2->next = *nd1;
	if ((*nd1)->prev != NULL)
		(*nd1)->prev->next = nd2;
	else
		*h = nd2;
	(*nd1)->prev = nd2;
	*nd1 = nd2->prev;
}

/**
 * insertion_sort_list - intersection sort algorithm
 *
 * @list: A pointer to the head of the list
 * Return: nothing (void)
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	for (iter = (*list)->next; iter != NULL; iter = tmp)
	{
		tmp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			swp(list, &insert, iter);
			print_list((const listint_t *)*list);
		}
	}
}
