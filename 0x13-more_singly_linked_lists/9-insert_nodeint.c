#include "lists.h"

/**
* insert_nodeint_at_index - prototype
* @head: variable
* @idx: variable
* @n: variable
* Return: output
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;

listint_t *yep;
listint_t *tp = *head;

yep = malloc(sizeof(listint_t));
if (!yep || !head)
return (NULL);
yep->n = n;
yep->next = NULL;
if (idx == 0)
{
yep->next = *head;
*head = yep;
return (yep);
}
for (i = 0; tp && i < idx; i++)
{
if (i == idx - 1)
{
yep->next = tp->next;
tp->next = yep;
return (yep);
}
else
tp = tp->next;
}
return (NULL);
}
