#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at a certain,
 * index in a linked list
 * @head : first node on the linked list
 * @index : node to be returned
 *
 * Return: pointer to the node or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int countNode = 0;
while (head != NULL)
{
if (countNode == index)
{
return (head);
}
countNode++;
head = head->next;
}
return (NULL);
}
