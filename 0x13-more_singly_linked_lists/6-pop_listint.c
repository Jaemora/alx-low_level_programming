#include "lists.h"

/**
* pop_listint - prototype
* @head: variable
* Return: something
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int no;

if (!head || !*head)
return (0);
no = (*head)->n;
tp = (*head)->next;
free(*head);
*head = tp;
return (no);
}

