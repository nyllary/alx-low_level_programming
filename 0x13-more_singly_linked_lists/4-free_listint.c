#include "lists.h"

/**
 * free_listint - frees memory allocated for node
 *
 * @head: memory to be freed
 *
 * Description: This is to free all the memory allocated
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
