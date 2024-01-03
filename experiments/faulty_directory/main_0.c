#include "lists.h"


int main(void)
{
	sly_list_t *head;
	sly_list_t *current;

	int cnt;
	int val;
	int status;
	int node_count = 0;

	head = new_node();
	node_count += 1;


	val = 65;

	for(cnt = 0; cnt < 26; cnt++, val++)
	{
		head = add_at_begin(head, new_node(), val, intoch(val));
	}
	print_list(head);


	for(cnt = 0, val = 97; cnt < 26; cnt++, val++)
	{
		head = add_at_end(head, new_node(), val, intoch(val));
	}
	print_list(head);


	for(cnt = 0, val = 65; cnt < 26; cnt++, val++)
	{
		head = insert_node(head, new_node(), val, intoch(val));
	}
	print_list(head);


	return(0);
}
