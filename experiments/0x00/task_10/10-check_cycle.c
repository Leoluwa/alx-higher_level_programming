#include "lists.h"

/**
 * check_cycle - Checks if a singly linked list has a cycle in it
 * @list: pointer to the singly linked ist to be checked
 * Return:	0 if there is no cycle,
 *		1 if there is a cycle
 *
 */
int check_cycle(listint_t *list)
{
	/*
	 * Declare two listint_t pointers
	 * named first and second :)
	 */
	listint_t *first;
	listint_t *second;

	/*
	 * Initialize first and second
	 * to the address in the list pointer
	 */
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
		/*
		 * first moves one node per iteration :)
		 */
		first = first->next;

		/*
		 * second moves two nodes per iteration :)
		 */
		second = second->next->next;

		/*
		 * check if first and second have the same value :)
		 */
		if (first == second)
		{
			return (1);
		}
	}

	/*
	 * return 0 if first and second,
	 * did not point to the same memory,
	 * address at any point while the program ran :)
	 */
	return (0);
}
