#include "lists.h"

/**
 * get_nodeint_at_index - return node at list
 * @head: first node
 * @index: index
 *
 * Return: P to node or NUUL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}

