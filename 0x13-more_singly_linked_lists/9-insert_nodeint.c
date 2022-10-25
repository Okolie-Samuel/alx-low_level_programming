#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position
 * @head: head of a listint_t list
 * @idx: index
 * @n: value for a new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	listint_t *new, *curent;

	if (head == NULL)
		return (NULL);
	curent = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (curent == NULL && idx == 0)
	{
		new->next = NULL;
		curent = new
			return (new);
	}
	while (curent != NULL)
	{
		if (idx == 0)
				
			new->next = curent
				curent->next = new;	
		return (new);
	}
	curent = (curent)->next;
	idx--;
}
return 	(NULL);
}
