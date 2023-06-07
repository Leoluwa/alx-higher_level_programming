/*
 * June-6th-2023
 * https://www.techcrashcourse.com/2016/06/program-to-find-loop-in-linked-list.html
 *
 * ~ Algorithm to detect cycle in a linked list ~
 *
 * Fast and Slow pointer method.
 *
 * Let "head" be the head pointer of given linked list.
 * 
 * Let, "slow" and "fast" be two node pointers pointing
 *  to the head node of linked list.
 *  
 * In every iteration, the "slow" pointer moves ahead by one
 *  node(slow = slow->next;) whereas "fast" pointer moves two nodes
 *  at a time(fast = fast->next->next;).
 *  
 * If linked list contains a loop, "slow" and "fast" pointers will eventually meet 
 *  at the same node, thus indicating that the linked list contains a loop.
 *  
 * If pointers do not meet then linked list doesn’t have loop.
 * 
 * This algorithm is known as Floyd’s Cycle-Finding Algorithm
 */

/*
 * ===================
 * Abdulwahab Usman :)
 * ===================
 */

/*
 * A program to check if there is a cycle
 * in a linked list :)
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * A structure declaration for the linked list :)
 */
struct node
{
	int data;
	struct node *next;
} *head;

void initialize(void)
{
	head = NULL;
}

void insert(int num)
{
	/*
	 * Create a new node on the linked list :)
	 */
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = num;

	/*
	 * Make the next pointer of the new node
	 * to point to the head node of the linked list :)
	 */
	newNode->next = head;

	/*
	 * Make the newNode the new head node of the linked list :)
	 */
	head = newNode;

	/*
	 * Display the newly inserted value :)
	 */
	printf("%d was inserted into the linked list :)\n", num);
}

void find_loop(struct node *head)
{
	struct node *slow, *fast;
	slow = fast = head;

	while(slow && fast && fast->next)
	{
		/*
		 * The slow pointer will move one node
		 * per iteration.
		 *
		 * The fast pointer wil move two nodes
		 * per iteration :)
		 */
		slow = slow->next;
		fast = fast->next->next;

		/*
		 * Check if the slow and fast pointers
		 * meet at the current address.
		 *
		 * If that is the case,
		 * we have a circle on the linked list :)
		 */
		if(slow == fast)
		{
			printf("We have a loop on this linked list :)");
			return;
		}
	}
	printf("No loop on this linked list :)");
}

/*
 * A function that prints the linked list
 * from the head node to the tail node :)
 */
void print_linked_list(struct node *nodePtr)
{
	while(nodePtr != NULL)
	{
		printf("%d", nodePtr->data);
		nodePtr = nodePtr->next;
		if(nodePtr != NULL)
		{
			printf("-->");
		}
	}
}

int main(void)
{
	initialize();

	/*
	 * Make a linked list :)
	 */
	insert(7);
	insert(6);
	insert(4);
	insert(3);
	insert(2);

	/*
	 * Create loop in the linked list.
	 * Set next pointer of the last node
	 *   to the second node from the head node :)
	 */
	head->next->next->next->next->next = head->next;

	find_loop(head);

	return(0);
}
