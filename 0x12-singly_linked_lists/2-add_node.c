#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @list_start: double pointer to the list_t list
 * @data: new string to add in the node
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **list_start, const char *data)
{
list_t *new_node;
unsigned int length;

for (length = 0; data[length]; length++)
{
}

new_node = malloc(sizeof(list_t));
	if (!new_node)
	return (NULL);
	new_node->str = strdup(data);
	new_node->len = length;
	new_node->next = (*list_start);
	(*list_start) = new_node;
	return (*list_start);
}
