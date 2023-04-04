#include "lists.h"

/**
* get_nodeint_at_index - returns the node at a certain index in a linked list
* @head: variable
* @index: variable
* Return: output
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;

listint_t *tp = head;
while (tp && i < index)
{
tp = tp->next;
i++;
}
return (tp ? tp : NULL);
}

