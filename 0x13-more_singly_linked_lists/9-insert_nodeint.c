#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: pointer
 * @idx:  index where the new node is added
 * @n: data to add for new node
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp;

	if (new == NULL || head == NULL)
		return (NULL);
	temp = (*head);
	new->n = n;
	new->next = temp;
	if (idx == 0)
	{
		(*head) = new;
		return (new);
	}
	for (i = 0; i < idx; i++)
	{
		if (temp == NULL)
			return (NULL);
		if (i != (idx - 1))
			temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
