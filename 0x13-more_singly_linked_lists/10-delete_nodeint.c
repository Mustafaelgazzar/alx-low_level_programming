#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of linked list
 * @head: address of pointer to the first node
 * @index: index of the node to be deleted
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (!head || !*head)
	return (-1);

	if (index == 0)
	{
	temp = *head;
	*head = temp->next;
	free(temp);
	return (1);
	}

	current = *head;
	for (i = 0; i < index - 1 && current != NULL; i++)
	current = current->next;

	if (current == NULL || current->next == NULL)
	return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
