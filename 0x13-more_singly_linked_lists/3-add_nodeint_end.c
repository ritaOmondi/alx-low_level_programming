#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Adds a new node at the end of the linked list
 * @head : pointer to the head
 * @n : contant input integer
 *
 * Return: new node at the end of th linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNodeE = malloc(sizeof(listint_t));
if (newNodeE == NULL)
{
return (NULL);
}
newNodeE->n = n;
newNodeE->next = NULL;
if (*head == NULL)
{
*head = newNodeE;
}
else
{
listint_t *current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = newNodeE;
}
return (newNodeE);
}
