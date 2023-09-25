#include "lists.h"
/**
 * sum_listint - sums up all data in a linked list
 * @head : first node in a linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current = head;

while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
