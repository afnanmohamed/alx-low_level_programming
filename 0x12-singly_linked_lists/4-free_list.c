#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - a function that frees a list_t list.
 * @head: pointer to the first node in the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tempss;

	while (head != NULL)
	{
		tempss = head;
		head = head->next;
		free(tempss->str);
		free(tempss);
	}
}
