#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Function that deletes the head of a node
 * @head : pointer to the head
 *
 * Return:  returns the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (*head == NULL)
{
return (0);
}
temp = *head;
num = temp->n;
*head = temp->next;
free(temp);
return (num);
}
