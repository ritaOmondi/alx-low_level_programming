#include "lists.h"
/**
 * print_listint - Function the all elements in a linked list
 * @h : head pointer
 *
 * Return: number of nodes in alinked list
 */
size_t print_listint(const listint_t *h)
{
	size_t countNodes = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	countNodes++;
	}
	return (countNodes);
}
