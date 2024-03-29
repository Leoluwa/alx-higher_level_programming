#ifndef	_LISTS_H_
#define _LISTS_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: point to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


/*
 * Functions :)
 *
 */
int check_cycle(listint_t *list);
void free_listint(listint_t *head);
size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif /* ~ _LISTS_H_ ~*/
