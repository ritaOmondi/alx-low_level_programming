#include "lists.h"
/**
 * listint_len - Function that counts the number of elements,
 * in listint_t list
 * @h : head pointer
 *
 * Return: The number of elements in alinked list
 */
size_t listint_len(const listint_t *h)
{
size_t countNodes = 0;

while (h != NULL)
{
countNodes++;
h = h->next;
}
return (countNodes);
}
