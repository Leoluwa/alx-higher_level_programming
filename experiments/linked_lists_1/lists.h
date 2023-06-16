#ifndef	_LISTS_H_
#define	_LISTS_H_


#include <stdio.h>
#include <stdlib.h>



/*
 * singly linked list structure :)
 */
typedef struct sly_list_s
{
	int num;
	char chr;

	struct sly_list_s *next;
} sly_list_t;


/*
 * functions declaration :)
 */
char intoch(int num);
sly_list_t *new_node( void );
void print_list( sly_list_t *head );
int release_node( sly_list_t *node );
sly_list_t *remove_node( sly_list_t *head, sly_list_t *node );
sly_list_t *add_at_end( sly_list_t *head, sly_list_t *node_new, int num, char chr );
sly_list_t *insert_node( sly_list_t *head, sly_list_t *node_new, int num, char chr );
sly_list_t *add_at_begin( sly_list_t *head, sly_list_t *node_new, int num, char chr );

/*
 * functions definition :)
 */
char intoch(int num)
{
	int chk;
	int cnt;
	char *lowercase = "abcdefghijklmnopqrstuvwxyz";
	char *uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	if((num >= 97) || (num <= 122))
	{
		for(cnt = 0, chk = 97; cnt < 26; cnt++, chk++)
		{
			if(num == chk)
			{
				return(lowercase[cnt]);
			}
		}
	}

	if((num >= 65) || (num <= 90))
	{
		for(cnt = 0, chk = 65; cnt < 26; cnt++, chk++)
		{
			if(num == chk)
			{
				return(uppercase[cnt]);
			}
		}
	}

	return(0);
}



/*
 * print a singly linked list,
 * starting at the head passed :)
 */
void print_list( sly_list_t *head )
{
	int status;

	sly_list_t *current;

	status = 1;
	current = head;

	printf("\n");

	while(status)
	{
		if(current->next == NULL)
			status = 0;

		printf("%d\t%c\t%p\n", current->num, current->chr, current->next);
		current = current->next;
	}
}



int release_node( sly_list_t *node );

/* new_node()
 *
 * Allocate memory for a new node and,
 * initialice the new node to NULL :)
 *
 * return the memory address of the new node :)
 */
sly_list_t *new_node( void )
{
	sly_list_t *node;

	node = malloc(sizeof(sly_list_t));

	if(node == NULL)
	{
		return( node );
	}
	else
	{
		node->num = -7;
		node->chr = 0;
		node->next = NULL;

		return( node );
	}
}



/*
 * remove_node()
 *
 * Removes a node from the list :)
 *
 * Returns the memory address of the node immediately
 * before the removed node :)
 *
 */
sly_list_t *remove_node( sly_list_t *head, sly_list_t *node )
{
	sly_list_t *temp_head;
	sly_list_t *temp_node;

	temp_head = head;
	temp_node = node;

	int status = 1;

	while(status)
	{
		if(temp_head->next == temp_node)
		{
			temp_head->next = temp_node->next;

			return (temp_head->next);

			status = 0;
		}
	}
}



/*
 * add_at_end()
 *
 * Adds a node at the end of the list :)
 */
sly_list_t *add_at_end( sly_list_t *head, sly_list_t *node_new, int num, char chr )
{
	int status;
	sly_list_t *current;

	status = 1;
	current = head;

	while(status)
	{
		if(current->next == NULL)
		{
			status = 0;
			node_new->num = num;
			node_new->chr = chr;

			current->next = node_new;
		}
		current = current->next;
	}
	return(head);
}



/*
 * insert_node()
 *
 * Inserts a node in the list,
 * based on the specified conditon :)
 *
 */
sly_list_t *insert_node( sly_list_t *head, sly_list_t *node_new, int num, char chr )
{
	int status;
	sly_list_t *current;

	status = 1;
	current = head;

	while(status)
	{
		if((num >= 65) && (num <= 90))
		{
			if(current->num == (num + 32))
			{
				node_new->next = current->next;
				current->next = node_new;

				node_new->num = num;
				node_new->chr = chr;

				status = 0;
			}
			current = current->next;
		}

		if((num >= 97) && (num <= 122))
		{
			if(current->num == (num - 32))
			{
				node_new->next = current->next;
				current->next = node_new;

				node_new->num = num;
				node_new->chr = chr;

				status = 0;
			}
			current = current->next;
		}
	}
	return(head);
}



/*
 * add_at_begin()
 *
 * Adds a node to the beginning of the list :)
 *
 * Returns the memory address of the newly added node :)
 *
 */
sly_list_t *add_at_begin( sly_list_t *head, sly_list_t *node_new, int num, char chr )
{
	node_new->num = num;
	node_new->chr = chr;
	node_new->next = head;

	head = node_new;

	return(head);
}


#endif
