#include <stdio.h>
#include <stdlib.h>



typedef struct list_s
{
	int num;
	struct list_s *next;
} list_t;


// list_t *new_node(list_t **head, const int val);

int main(void)
{
	int cnt;
	int node_cnt;

	list_t *new;
	list_t *head;
	list_t *temp;
	list_t *current;

	printf("\n");

	for(cnt = 0, node_cnt = 0; cnt < 4; cnt++)
	{
		new = malloc(sizeof(list_t));

		if(new == NULL)
		{
			cnt = 4;
		}
		else
		{
			if(cnt == 0)
			{
				current = head = new;
				current->next = NULL;
				current->num = (cnt + 1);
			}
			else
			{
				current->next = new;

				current = new;
				current->num = (cnt + 1);
				current->next = NULL;
			}

			node_cnt++;
		}

		printf("%d\n", cnt);
	}

	printf("\n");

	current = head;
	for(cnt = 0; cnt < 4; cnt++)
	{
		printf("%d\n", current->num);

		current = current->next;
	}


	printf("\n----------------------\n");

	new = malloc(sizeof(list_t));

	if(new == NULL)
	{
		return (0);
	}
	else
	{
		new->num = 24;
		new->next = NULL;

		cnt = 0;
		current = head;
		printf("\nhere 0\n");

		while(cnt < node_cnt)
		{
			printf("\nhere 1\n");
			if(current->num == 2)
			{
				new->next = current->next;
				current->next = new;

				node_cnt++;
				cnt = node_cnt;
				printf("\nhere\n");
			}
			else
			{
				; /* Do nothing :) */
			}

			printf("\n%d\n", current->num);

			current = current->next;
			printf("\nhere 3\n");

			cnt++;
		}
	}


	printf("\n");

	cnt = 0;
	current = head;
	while(cnt < node_cnt)
	{
		printf("%d\t%d\n", current->num, node_cnt);

		current = current->next;

		cnt++;
	}

	return(0);
}
