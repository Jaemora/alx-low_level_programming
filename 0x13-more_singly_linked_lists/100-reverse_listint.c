#include "lists.h"

/**
* reverse_listint - reverse list
* @head: variable
* Return: output
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = prev;
rev = *head;
*head = next;
}

*head = prev;
return (*head);
}
