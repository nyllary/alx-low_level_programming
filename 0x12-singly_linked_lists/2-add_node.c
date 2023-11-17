#include "list.h"

/**
 * add_node - prints a new node at start
 *
 * @head: Pointer to the new node
 * @str: space to store the new node
 *
 * Return: Address of the new element on success
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nod = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);
	if (new_nod == NULL)
		return (NULL);
	new_nod->str = strdup(str);

	if (new_nod->str == NULL)
	{
		free(new_nod);
		return (NULL);
	}
	new_nod->len = strlen(str);
	new_nod->next = *head;
	*head = new_nod;

	return (new_nod);
}
