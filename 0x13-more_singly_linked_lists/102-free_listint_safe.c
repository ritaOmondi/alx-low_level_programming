#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
size_t countN = 0;
listint_t *current = *h;
listint_t *temp;

while (current != NULL)
{
temp = current;
current = current->next;
free(temp);
countN++;
}
*h = NULL;
return (countN);
}
