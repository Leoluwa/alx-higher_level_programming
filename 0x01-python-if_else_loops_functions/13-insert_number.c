#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_node - inserts a number in a sorted singly linked list
 * @head: pointer to a pointer to the sorted list
 * @number: number to be inserted into the list
 * Return: address of the new node or,
 *         NULL if it failed
 *
 */
listint_t *insert_node(listint_t **head, int number)
{
	int status;
	listint_t *new;
	listint_t *current;

	current = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = number;
	new->next = NULL;

	status = 1;
	while (status)
	{
		if (((current->next->n) > (new->n)) && ((new->n) > (current->n)))
		{
			new->next = current->next;
			current->next = new;
			status = 0;
		}

		current = current->next;
	}

	return (new);
}
