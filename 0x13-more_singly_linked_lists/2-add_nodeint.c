#include "lists.h"

/**
 * add_nodeint - add new code
 * @head: p to first node
 * @n: data to insert
 *
 * Return: p to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

