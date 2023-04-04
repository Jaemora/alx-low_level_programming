#include "lists.h"

/**
* delete_nodeint_at_index - deletes nodes
* @head: variable
* @index: variable
* Return: output
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tp = *head;
listint_t *now = NULL;
unsigned int z = 0;

if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(tp);
return (1);
}
while (z < index - 1)
{
if (!tp || !(tp->next))
return (-1);
tp = tp->next;
z++;
}
now = tp->next;
tp->next = now->next;
free(now);
return (1);
}
