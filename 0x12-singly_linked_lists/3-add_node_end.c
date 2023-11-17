#include "lists.h"

/**
 * add_node_end - prints a new node at start
 *
 * @head: Pointer to the new node
 * @str: space to store the new node
 *
 * Return: Address of the new element on success
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *cur_node;

	if (str == NULL || new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		cur_node = *head;
		while (cur_node->next != NULL)
			cur_node = cur_node->next;
		cur_node->next = new_node;
	}
	return (new_node);
}
