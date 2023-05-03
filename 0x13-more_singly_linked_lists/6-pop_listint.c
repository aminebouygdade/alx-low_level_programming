#include "lists.h"

/**
 * pop_listint - deletes head
 * @head: p to first elem
 *
 * Return: data inside elem or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
