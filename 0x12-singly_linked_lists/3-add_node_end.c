#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Appends a new node to the tail of a linked list
 * @list_head: Double pointer to the list_t list
 * @input_str: String to be included in the new node
 *
 * Return: Address of the new node, or NULL if the operation failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current_node = *head;
	unsigned int str_length = 0;

	for (; str[str_length]; str_length++)
	;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_length;
	new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

	for (; current_node->next; current_node = current_node->next)
	;

current_node->next = new_node;

	return (new_node);
}
