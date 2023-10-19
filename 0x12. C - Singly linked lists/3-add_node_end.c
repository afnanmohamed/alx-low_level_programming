#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * append_node - Appends a new node to the tail of a linked list
 * @list_head: Double pointer to the list_t list
 * @input_str: String to be included in the new node
 *
 * Return: Address of the new node, or NULL if the operation failed
 */

list_t *append_node(list_t **list_head, const char *input_str)
{
	list_t *new_node;
	list_t *current_node = *list_head;
	unsigned int str_length = 0;

	for (; input_str[str_length]; str_length++)
	;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	return (NULL);

	new_node->str = strdup(input_str);
	new_node->len = str_length;
	new_node->next = NULL;

if (*list_head == NULL)
{
*list_head = new_node;
return (new_node);
}

	for (; current_node->next; current_node = current_node->next)
	;

current_node->next = new_node;

	return (new_node);
}
