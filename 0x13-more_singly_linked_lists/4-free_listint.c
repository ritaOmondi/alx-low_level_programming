#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function that frees a linked list
 * @head : head pointer
 *
 * Return : Nothing
 */
void free_listint(listint_t *head)
{
listint_t *current;

while (head != NULL)
{
current = head;
head = head->next;
free(current);
}
}
