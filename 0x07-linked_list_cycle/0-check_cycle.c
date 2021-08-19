#include "lists.h"

/**
 * check_cycle - Checks if a linked list is a circular one
 * @list: Linked list
 * Return: 0 if has not cycle, 1 otherwise
 */
int check_cycle(listint_t *list)
{
	listint_t *first = list, *second = list;

	while (first && second)
	{
		if (!(second->next) || !(second->next->next))
			break;
		first = first->next;
		second = second->next->next;
		if (first == second)
			return (1);
	}
	return (0);
}
