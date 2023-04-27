#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return nm of elem
 * @h: pointer to list_t list
 *
 * Return: num elem inh
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

