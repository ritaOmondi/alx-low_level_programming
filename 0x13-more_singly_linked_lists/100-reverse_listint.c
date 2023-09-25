#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - reverses a linked list
 * @head : head pointer
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous = NULL;
listint_t *current = *head;

while (current != NULL)
{
listint_t *nextNode = current->next;
current->next = previous;
previous = current;
current = nextNode;
}
*head = previous;
return (previous);
}
