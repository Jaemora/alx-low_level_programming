#include "lists.h"

/**
* reverse_listint - reverses a linked list
* @head: pointer to the first node in the list
*
* Return: pointer to the first node in the new list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *rev = NULL;
listint_t *nx = NULL;

while (*head)
{
nx = (*head)->next;
(*head)->next = rev;
rev = *head;
*head = nx;
}
*head = rev;
return (*head);
}
