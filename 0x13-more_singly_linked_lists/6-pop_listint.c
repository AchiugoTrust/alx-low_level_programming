#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer
 * Return: deleted head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = (*head);
	int a;

	if ((*head) == NULL)
	{
		free(*head);
		return (0);
	}
	a = (*head)->n;
	(*head) = (*head)->next;
	free(temp);
	return (a);
}
