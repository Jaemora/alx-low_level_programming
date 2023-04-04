#include "lists.h"

/**
* reverse_listint - reverse list
* @head: variable
* Return: output
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *rev = NULL;
listint_t *nx = NULL;

while (*head)
{
nx = (*head)->nx;
(*head)->nx = rev;
rev = *head;
*head = nx;
}

*head = rev;

return (*head);
}
