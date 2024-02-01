#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: parameter head
 *
 * Return: num of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}
