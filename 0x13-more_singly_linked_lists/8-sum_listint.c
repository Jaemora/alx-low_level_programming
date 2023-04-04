#include "lists.h"

/**
* sum_listint - prototype
* @head: variable
* Return: output
*/
int sum_listint(listint_t *head)
{
int sum = 0;

listint_t *tp = head;
while (tp)
{
plus += tp->n;
tp = tp->next;
}
return (sum);
}
