#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - Function that frees a listint_t list
 * @head : head pointer
 *
 * Return : nothing
 */
void free_listint2(listint_t **head)
{
listint_t *current;
while (*head)
{
current = *head;
*head = (*head)->next;
free(current);
}
}
