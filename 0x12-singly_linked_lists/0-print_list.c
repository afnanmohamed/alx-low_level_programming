#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elements of linked lists using for loop.
 * @h: pointer to the list_t list.
 * Return: the number of nodes printed.
 */
size_t print_list(const list_t *h)
{
size_t E;
for (E = 0; h; E++, h = h->next)
{
	if (!h->str)
		printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);
}

return (E);
}
