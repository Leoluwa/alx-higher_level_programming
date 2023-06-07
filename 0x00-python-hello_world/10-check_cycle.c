#include "lists.h"

/**
 * check_cycle - Checks if a singly linked list has a cycle in it
 * @list: pointer to the singly linked ist to be checked
 * Return:	0 if there is no cycle,
 *		1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *first;
	listint_t *second;

	first = second = list;

	/*
	 * Use a loop through the given list
	 *
	 * The loop condition should check that none
	 * of the pointers, list, first, and second is NULL
	 *
	 * Then, for each iteration through the list,
	 * the first pointer should move one position,
	 * the second pointer should move two positions :)
	 *
	 * Then, use an if statement to check,
	 * if the values in both first and second are the same :)
	 *
	 * If their values are the same,
	 * it means both first and second are pointing
	 * to the same memory location.
	 *
	 * That is a cycle :)
	 */
	while (first && second && second->next)
	{
		first = first->next;
		second = second->next->next;

		if (first == second)
			return (1);
	}
	return (0);
}
