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
	const listint_t *current = h;

	while (current != NULL)
	{
	printf("%d\n", current->n);
	countNodes++;
	current = current->next;
	}
	printf("\n");
	return (countNodes);
}
