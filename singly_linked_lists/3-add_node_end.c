#include "lists.h"

/**
 * @brief
 *
 * @param head
 * @param str
 * @return list_t*
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last_node = *head;

	if (new_node == NULL)
		return (0);

	if (head == NULL)
		return (0);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;

	return (last_node);
}
