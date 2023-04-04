#include "lists.h"

/**
* listint_len - no. of elements in the linked lists
* @h: variable
* Return: no. nodes
*/
size_t listint_len(const listint_t *h)
{
size_t num = 0;

while (h)
{
num++;
h = h->next;
}

return (num);
}
