#include "lists.h"
/**
  * add_dnodeint - add a new elements at the start of doubly linked list
  * @head: head
  * @n: data of the new node
  * Return: The address of the new element
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = (*head);
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
