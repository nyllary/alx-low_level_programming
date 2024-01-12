#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to list to be freed
 * Description: this function takes a pointer to a doubly linked list
 * and frees every node of the list by iterating throught the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
