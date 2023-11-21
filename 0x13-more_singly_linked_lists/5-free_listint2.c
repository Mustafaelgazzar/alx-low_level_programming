#include "lists.h"

/**
 * free_listint2 - frees a list of ints
 * @head: address of pointer to first node
 * Description: The function sets the head to NULL after freeing the list
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

	if (!head || !*head)
		return;

	node = *head;
	while (node)
	{
	temp = node;
	node = node->next;
	free(temp);
	}

	*head = NULL;
}
