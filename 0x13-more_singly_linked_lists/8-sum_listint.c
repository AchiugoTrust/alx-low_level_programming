#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: first node of singly linked list
 * Return: sum of all the data (n) of a linked list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
