#include "lists.h"

/**
 * free_list - frees allocated memory to head
 *
 * @head: poiter to allocated memory
 *
 * Return: Always (0)Success
 */
void free_list(list_t *head)
{
	while (head == NULL)
		free(head);
}
