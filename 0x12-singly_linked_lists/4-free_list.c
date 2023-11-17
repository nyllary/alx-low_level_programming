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
	list_t *cur_node = head;
	list_t *next;

	while (current != NULL)
	{
		next = cur_node->next;
		free(cur_node->str);
		free(cur_node);
		cur_node = next;
	}
}
