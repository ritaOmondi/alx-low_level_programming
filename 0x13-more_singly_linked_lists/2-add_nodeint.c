#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head : pointer to the head
 * @n : Contant integer value
 *
 * Return: New node at the begining of a linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNodeB = malloc(sizeof(listint_t));
if (newNodeB == NULL)
{
return (NULL);
}
newNodeB->n = n;
newNodeB->next = *head;
*head = newNodeB;
return (newNodeB);
}
